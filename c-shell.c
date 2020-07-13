#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 1024
#define MEM_ALLOC_ERR -1

// read the input from stdio
char *read_command() {
	char c, *buffer;
	int i = 0;

	// allocate size of buffer
	buffer = malloc(sizeof(char) * BUFFER_SIZE);
	if(!buffer) {
		fprintf(stderr, "Memory not available\n");
		exit(MEM_ALLOC_ERR);
	}

	while(1) {
		c = getchar();
		buffer[i] = c;

		// check if input is end of line or newline
		if((c == EOF) || (c == '\n')) {
			buffer[i] = '\0';
			break;
		}
		i++;

		// increase size of buffer if it exceeds the current size
		if(i >= BUFFER_SIZE) {
			buffer = realloc(buffer, i + BUFFER_SIZE);
			if(!buffer) {
				fprintf(stderr, "Memory not available\n");
				free(buffer);
				exit(MEM_ALLOC_ERR);
			}
		}
	}

	return buffer;
}

int main() {
	char *command;

	do {
		printf("$ ");
		command = read_command();
		printf("%s\n", command);
	}while(strcmp(command, "exit"));

	return 0;
}
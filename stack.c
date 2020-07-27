#include <stdlib.h>
#include <string.h>

struct stack {
	char *cmd;
	struct stack *link;
};

struct stack *push(struct stack *stck, char *command) {
	struct stack *temp = malloc(sizeof(struct stack));
	temp -> cmd = malloc(sizeof(char) * strlen(command));
	strcpy(temp -> cmd, command);

	if(!stck) {
		temp -> link = NULL;
		stck = temp;
	}
	else {
		temp -> link = stck;
		stck = temp;
	}
	return stck;
}

#include <stdio.h>
#include <unistd.h>

void cmd_cd(char *path) {
	int ret;
	ret = chdir(path);

	if(ret == -1) {
		fprintf(stderr, "No such directory\n");
	}
}
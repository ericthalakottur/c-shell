CC=gcc

c-shell: c-shell.c commands.c
	$(CC) -o c-shell c-shell.c commands.c

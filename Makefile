CC=gcc

c-shell: c-shell.c commands.c commands.h stack.c stack.h
	$(CC) -o c-shell c-shell.c commands.c stack.c

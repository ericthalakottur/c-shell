CC=gcc

c-shell: c-shell.c commands.c commands.h
	$(CC) -o c-shell c-shell.c commands.c

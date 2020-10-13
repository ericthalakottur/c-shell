CC=gcc

c-shell: src/c-shell.c src/commands.c src/commands.h
	$(CC) -o c-shell src/c-shell.c src/commands.c

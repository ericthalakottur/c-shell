CC=gcc

c-shell: src/c-shell.c src/commands.c src/commands.h src/stack.c src/stack.h
	$(CC) -o c-shell src/c-shell.c src/commands.c src/stack.c

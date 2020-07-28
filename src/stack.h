#ifndef INCLUDE_GUARD_26072020

#define INCLUDE_GUARD_26072020

struct stack {
	char *cmd;
	struct stack *link;
};

struct stack *push(struct stack *, char *);
void free_stack(struct stack *);

#endif

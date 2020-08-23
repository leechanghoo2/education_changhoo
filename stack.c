#include <stdio.h>

#define MAX 100
int stack[MAX];
int top;

void init_stack(void) {
	top = -1;
}

int push(int t) {

	if (top >= MAX - 1) {
		printf("\n    Stack overflow.");
		return -1;
	}

	stack[++top] = t;
	return t;
}

int pop(void) {
	if (top < 0) {
		printf("\n   Stack underflow.");
		return -1;
	}
	return stack[top--];
}

void print_stack(void) {
	int i;
	printf("\n Stack contents : TOP ----> Bottom\n");
	for (i = top; i >= 0; i--) {
		printf("%-6d", stack[i]);
	}
}

int main(void) {

	int i;
	init_stack();

	printf("\nPush 5,4,7,8,2,1");
	push(5);
	push(4);
	push(7);
	push(8);
	push(2);
	push(1);
	print_stack();

	printf("\nPop");
	i = pop();
	print_stack();
	printf("\n   popping value is %d", i);

	printf("\nPush 3, 2, 5, 7, 2");
	push(3);
	push(2);
	push(5);
	push(7);
	push(2);
	print_stack();

	printf("\nNow stack is full, push 3");
	push(3);
	print_stack();

	printf("\nInitialize stack");
	init_stack();
	print_stack();

	printf("\nNow stack is empty, pop");
	i = pop();
	print_stack();
	printf("\n    popping value is %d", i);

	return 0;
}


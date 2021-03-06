#include "Stack.h"

struct Stack {
	StackElement* top = nullptr;
	int size = 0;
};

struct StackElement {
	char element;
	StackElement* next = nullptr;
};


void push(Stack* stack, char element) {
	StackElement* newTop = new StackElement;
	newTop->element = element;
	newTop->next = stack->top;
	stack->top = newTop;
	stack->size += 1;
};

bool isEmpty(Stack* stack) {
	return ((stack->top) == nullptr);
};

int getSize(Stack* stack) {
	return stack->size;
}

char pop(Stack* stack) {
	if (isEmpty(stack)) {
		return '0';
	}
	char returnIt = stack->top->element;
	StackElement* oldTop = stack->top;
	stack->top = oldTop->next;
	delete oldTop;
	stack->size -= 1;
	return returnIt;
};

Stack* newStack() {
	return new Stack;
};

void deleteStack(Stack* stack) {
	delete stack;
}
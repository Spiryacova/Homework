#include "Stack.h"

struct Stack {
	StackElement* top = nullptr;
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
};

bool isEmpty(Stack* stack) {
	return ((stack->top) == nullptr);
};

char pop(Stack* stack) {
	if (isEmpty(stack)) {
		return '0';
	}
	char returnIt = stack->top->element;
	StackElement* oldTop = stack->top;
	stack->top = oldTop->next;
	delete oldTop;
	return returnIt;
};

Stack* newStack() {
	return new Stack;
};

void deleteStack(Stack* stack) {
	delete stack;
}
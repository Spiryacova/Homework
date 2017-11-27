#include "Stack.h"

struct StackElement {
	elType element;
	StackElement* next = nullptr;
};

struct Stack {
	StackElement* top = nullptr;
	int size = 0;
};

void push(Stack* stack, elType element) {
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

elType pop(Stack* stack) {
	if (isEmpty(stack)) {
		return '0';
	}
	elType returnIt = stack->top->element;
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
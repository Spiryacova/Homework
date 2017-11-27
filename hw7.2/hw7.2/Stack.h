#pragma once
typedef char elType;

struct Stack;

void push(Stack* stack, elType element); // Положить в стек
elType pop(Stack* stack); // Достать из стека
Stack* newStack(); // Возвращает указатель на начало
bool isEmpty(Stack* stack);
void deleteStack(Stack* stack);
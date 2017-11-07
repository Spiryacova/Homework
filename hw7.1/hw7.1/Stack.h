#pragma once

struct Stack;
struct StackElement;

void push(Stack* stack, char element); // Положить в стек
char pop(Stack* stack); // Достать из стека
Stack* newStack(); // Возвращает указатель на начало
bool isEmpty(Stack* stack);
void deleteStack(Stack* stack);
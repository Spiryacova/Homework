#pragma once

struct Stack;
struct StackElement;

void push(Stack* stack, char element); // �������� � ����
char pop(Stack* stack); // ������� �� �����
Stack* newStack(); // ���������� ��������� �� ������
bool isEmpty(Stack* stack);
void deleteStack(Stack* stack);
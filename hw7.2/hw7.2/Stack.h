#pragma once
typedef char elType;

struct Stack;

void push(Stack* stack, elType element); // �������� � ����
elType pop(Stack* stack); // ������� �� �����
Stack* newStack(); // ���������� ��������� �� ������
bool isEmpty(Stack* stack);
void deleteStack(Stack* stack);
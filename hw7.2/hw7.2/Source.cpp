#include <iostream>
#include <string>
#include "Stack.h"

//Написать программу проверки баланса скобок в строке, скобки могут быть трёх видов : (), [], {}.
//Скобочная последовательность вида({ ) } считается некорректной, ({}) - корректной.
// Оно работает
using namespace std;

bool isBalanced(string input) {
	int stringSize = input.size();
	bool isBalanced = true;
	Stack* stack = newStack();
	for (int i = 0; i < stringSize; ++i) {
		if (input[i] == '(' || input[i] == '[' || input[i] == '{') {
			push(stack, input[i]);
		}
		if (input[i] == ')' || input[i] == ']' || input[i] == '}') {
			if (isEmpty(stack)) {
				isBalanced = false;
			}
			else {
				char elFromStack = pop(stack);
				switch (input[i]) {
					case ')': {
						if (elFromStack != '(') {
							isBalanced = false;
						}
						break;
					}
					case ']': {
						if (elFromStack != '[') {
							isBalanced = false;
						}
						break;
					}
					case '}': {
						if (elFromStack != '{') {
							isBalanced = false;
						}
						break;
					}
				}
			}
		}
	}
	if (!isEmpty(stack)) {
		isBalanced = false;
	}
	deleteStack(stack);
	return isBalanced;
}

void testStack() {
	Stack* stack = newStack();
	push(stack, 'a');
	char a = pop(stack);
	if (a == 'a' && isEmpty(stack)) {
		cout << "Stack test: Ok" << endl;
	}
	else {
		cout << "Stack works wrong" << endl;
	}
	if (a == '0') {
		cout << "It was empty" << endl;
	}
}

void tests() {
	string input1 = "()";
	if (isBalanced(input1)) {
		cout << "Test 1: Ok" << endl;
	}
	else {
		cout << "Test 1: Failed" << endl;
	}
	string input2 = "({)}";
	if (!isBalanced(input2)) {
		cout << "Test 2: Ok" << endl;
	}
	else {
		cout << "Test 2: Failed" << endl;
	}
	string input3 = "({})";
	if (isBalanced(input3)) {
		cout << "Test 3: Ok" << endl;
	}
	else {
		cout << "Test 3: Failed" << endl;
	}
}

int main() {
	setlocale(LC_ALL, "rus");
	string input;
	cout << "Введите последовательность скобок" << endl;
	cin >> input;
	if (isBalanced(input)) {
		cout << "Сбалансирована" << endl;
	}
	else {
		cout << "Не сбалансирована" << endl;
	}
	int c = 0;
	cin >> c;
	return 0;
}
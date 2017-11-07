#include <iostream>
#include <string>
#include "Stack.h"

//Написать программу проверки баланса скобок в строке, скобки могут быть трёх видов : (), [], {}.
//Скобочная последовательность вида({ ) } считается некорректной, ({}) - корректной.
//f
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
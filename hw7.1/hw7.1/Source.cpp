#include <iostream>
#include <string>
#include "Stack.h"

using namespace std;

// Написать программу для вычисления арифметического выражения в постфиксной форме.
// С клавиатуры вводится последовательность цифр(для простоты) и операций + , -, *, / ,
// представляющая выражение в постфиксной форме, должен выводиться результат вычисления.
// Например, на тесте 9 6 - 1 2 + *должно получиться 9.

int counting() {
	Stack* stack = newStack();
	int firstNumber = 0; // Первым в строке ведь точно будет число
	cin >> firstNumber;
	push(stack, firstNumber);
	int secondNumber = 0;
	cin >> secondNumber;
	push(stack, secondNumber); // И вторым тоже
	while (getSize(stack) > 1) {
		char nextCharacter;
		cin >> nextCharacter;
		int mbNumber = 0;
		while (nextCharacter != ' ') {
			if (nextCharacter <= '9' && nextCharacter >= '0') {
				switch (nextCharacter) {
					case '0': {
						mbNumber *= 10;
						mbNumber += 0;
						break;
					}
					case '1': {
						mbNumber *= 10;
						mbNumber += 1;
						break;
					}
					case '2': {
						mbNumber *= 10;
						mbNumber += 2;
						break;
					}
					case '3': {
						mbNumber *= 10;
						mbNumber += 3;
						break;
					}
					case '4': {
						mbNumber *= 10;
						mbNumber += 4;
						break;
					}
					case '5': {
						mbNumber *= 10;
						mbNumber += 5;
						break;
					}
					case '6': {
						mbNumber *= 10;
						mbNumber += 6;
						break; 
					}
					case '7': {
						mbNumber *= 10;
						mbNumber += 7;
						break;
					}
					case '8': {
						mbNumber *= 10;
						mbNumber += 8;
						break;
					}
					case '9': {
						mbNumber *= 10;
						mbNumber += 9;
						break;
					}
				}
			}
			else {
				switch (nextCharacter) {
					case '+': {
						int second = pop(stack);
						int first = pop(stack);
						push(stack, first + second);
						break;
					}
					case '-': {
						int second = pop(stack);
						int first = pop(stack);
						push(stack, first - second);
						break;
					}
					case '*': {
						int second = pop(stack);
						int first = pop(stack);
						push(stack, first * second);
						break;
					}
					case '/': {
						int second = pop(stack);
						int first = pop(stack);
						push(stack, first / second);
						break;
					}
				}
			}
		}
		if (mbNumber) {
			push(stack, mbNumber);
		}
	}
	int answer = pop(stack);
	deleteStack(stack);
	return answer;
}

//bool test1() {
//	if (counting() == 9) {
//		cout << "Test 1: пройден" << endl;
//	}
//	else {
//		cout << "Test 1: ошибка" << endl;
//	}
//}

int main() {
	setlocale(LC_ALL, "rus");
	cout << "Введите выражение" << endl;
	cout << "Результат: " << counting() << endl;
	int c = 0;
	cin >> c;
	return 0;
}
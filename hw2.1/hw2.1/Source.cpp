#include <iostream>

using namespace std;
//f
int fibonacciRecur(int n) {
	if (n == 0) {
		return 0;
	}
	if ((n == 1) || (n == 2)) {
		return 1;
	}
	else {
		return fibonacciRecur(n - 1) + fibonacciRecur(n - 2);
	}
}

int fibonacciIter(int n) {
	int fib = 0;
	int fibPrev = 1;
	if ((n == 1) || (n == 2)) {
		return 1;
	}
	else {
		while (n - 1 >= 0) {
			--n;
			fib += fibPrev;
			fibPrev = fib - fibPrev;
		}
		return fib;
	}
}

int main()
{
	cout << "Enter index of Fibonacci number" << endl;
	int n = 0;
	cin >> n;
	int fib = fibonacciIter(n);
	cout << "Counted with iteration: " << fib << endl;
	fib = fibonacciRecur(n);
	cout << "Counted with recurrence: " << fib << endl;
	return 0;
}
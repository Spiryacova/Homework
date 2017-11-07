#include <iostream>

using namespace std;
//f
long long int pow(int n, int power) {
	if (power == 0) {
		return 1;
	}
	if (power == 1) {
		return n;
	}
	if (power % 2) {
		return pow(n, power - 1) * n;
	}
	else {
		const int sqrtN = pow(n, power / 2);
		return sqrtN * sqrtN;
	}
}

long long int simplePow(int n, int power) {
	long long int nInPower = 1;
	for (int i = 0; i < power; ++i) {
		nInPower *= n;
	}
	return nInPower;
}

int main()
{
	cout << "Enter the number" << endl;
	int n = 0;
	cin >> n;
	cout << "Enter the power" << endl;
	int power = 1;
	cin >> power;

	cout << "Counting with difficulty (log n) result: " << pow(n, power) << endl;
	cout << "Counting with difficulty (n) result: " << simplePow(n, power) << endl;
	return 0;
}
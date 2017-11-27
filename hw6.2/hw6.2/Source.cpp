//"Считалочка"
//В нашем случае участвует n воинов и убивают каждого m - го.
//Требуется определить номер k начальной позиции воина, который должен будет остаться последним.
//Считать с помощью циклического списка.

#include <iostream>
#include "CircleList.h"

using namespace std;

void createCircleListOfNNumbers(CircleList* list, int n) {
	CircleListElement* head = getHead(list);
		CircleListElement* presentElement = head;
		for (int i = 2; i <= n; ++i) {
			presentElement = addElement(list, presentElement);
			setNumber(presentElement, i);
		}
		circleIt(presentElement, head);
}

int main() {
	setlocale(LC_ALL, "rus");
	// Ввод исходных данных
	cout << "Укажите количество воинов" << endl;
	int n = 0;
	cin >> n;
	cout << "Какой по счету выбывает?" << endl;
	int m = 1;
	cin >> m;

	// Создание циклического списка
	CircleList* list = createList();
	createCircleListOfNNumbers(list, n);

	// Собственно расчеты
	CircleListElement* presentElement = getHead(list);
	while (getSize(list) > 1) {
		for (int i = 1; i < m - 1; ++i) {
			presentElement = getNext(presentElement);
		}
		deleteElement(list, presentElement);
		presentElement = getNext(presentElement);
	}
	int k = getNumber(presentElement);
	cout << "Останется стоящий на " << k << " месте" << endl;

	cin >> n;
	return 0;
}
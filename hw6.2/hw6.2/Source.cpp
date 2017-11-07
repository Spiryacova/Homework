//"Считалочка" – отряд из 41 - го сикария, защищавший галилейскую крепость Массада,
//не пожелал сдаваться в плен блокировавшим его превосходящим силам римлян.
//Сикарии стали в круг и договорились, что каждые два воина будут убивать третьего, пока не погибнут все.
//Самоубийство – тяжкий грех, но тот, кто в конце концов останется последним, должен будет его совершить.
//Иосиф Флавий, командовавший этим отрядом, якобы быстро рассчитал, где нужно стать ему и его другу,
//чтобы остаться последними, но не для того, чтобы убить друг друга, а чтобы сдать крепость римлянам.
//
//В нашем случае участвует n воинов и убивают каждого m - го.
//Требуется определить номер k начальной позиции воина, который должен будет остаться последним.
//Считать с помощью циклического списка.

#include <iostream>
#include "CircleList.h"

using namespace std;

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
	CircleListElement* head = getHead(list);
	CircleListElement* presentElement = head;
	for (int i = 2; i <= n; ++i) {
		presentElement = addElement(list, presentElement);
		setNumber(presentElement, i);
	}
	circleIt(presentElement, head);

	// Собственно расчеты
	presentElement = head;
	while (getSize(list) > 1) {
		for (int i = 1; i < m - 1; ++i) {
			presentElement = getNext(presentElement);
		}
		cout << "Удаляемый: " << getNumber(getNext(presentElement)) << endl;
		deleteElement(list, presentElement);
		cout << "Предшествующий удаленному: " << getNumber(presentElement) << endl;
		presentElement = getNext(presentElement);
		cout << "?" << endl;
		if (presentElement == nullptr) {
			cout << "Что-то пошло не так" << endl;
		}
		else {
			cout << "Не nullptr" << endl;
		}
		cout << "Следующий после удаления: " << getNumber(presentElement) << endl;
	}
	int k = getNumber(presentElement);
	cout << "Останется стоящий на " << k << " месте" << endl;

	cin >> n;
	return 0;
}
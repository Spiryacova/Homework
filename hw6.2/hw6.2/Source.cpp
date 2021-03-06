//"����������" � ����� �� 41 - �� �������, ���������� ����������� �������� �������,
//�� ������� ��������� � ���� ������������� ��� ������������� ����� ������.
//������� ����� � ���� � ������������, ��� ������ ��� ����� ����� ������� ��������, ���� �� �������� ���.
//������������ � ������ ����, �� ���, ��� � ����� ������ ��������� ���������, ������ ����� ��� ���������.
//����� ������, ������������� ���� �������, ����� ������ ���������, ��� ����� ����� ��� � ��� �����,
//����� �������� ����������, �� �� ��� ����, ����� ����� ���� �����, � ����� ����� �������� ��������.
//
//� ����� ������ ��������� n ������ � ������� ������� m - ��.
//��������� ���������� ����� k ��������� ������� �����, ������� ������ ����� �������� ���������.
//������� � ������� ������������ ������.

#include <iostream>
#include "CircleList.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	// ���� �������� ������
	cout << "������� ���������� ������" << endl;
	int n = 0;
	cin >> n;
	cout << "����� �� ����� ��������?" << endl;
	int m = 1;
	cin >> m;

	// �������� ������������ ������
	CircleList* list = createList();
	CircleListElement* head = getHead(list);
	CircleListElement* presentElement = head;
	for (int i = 2; i <= n; ++i) {
		presentElement = addElement(list, presentElement);
		setNumber(presentElement, i);
	}
	circleIt(presentElement, head);

	// ���������� �������
	presentElement = head;
	while (getSize(list) > 1) {
		for (int i = 1; i < m - 1; ++i) {
			presentElement = getNext(presentElement);
		}
		cout << "���������: " << getNumber(getNext(presentElement)) << endl;
		deleteElement(list, presentElement);
		cout << "�������������� ����������: " << getNumber(presentElement) << endl;
		presentElement = getNext(presentElement);
		cout << "?" << endl;
		if (presentElement == nullptr) {
			cout << "���-�� ����� �� ���" << endl;
		}
		else {
			cout << "�� nullptr" << endl;
		}
		cout << "��������� ����� ��������: " << getNumber(presentElement) << endl;
	}
	int k = getNumber(presentElement);
	cout << "��������� ������� �� " << k << " �����" << endl;

	cin >> n;
	return 0;
}
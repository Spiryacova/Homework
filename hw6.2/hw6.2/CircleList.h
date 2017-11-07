#pragma once

struct CircleList;
struct CircleListElement;

// ������� ������
int getSize(CircleList* list);
CircleList* createList();
void deleteList(CircleList* list);
CircleListElement* getHead(CircleList* list);

// ������� ���������� ��������� ������
CircleListElement* getNext(CircleListElement* prevElement);
// ��� � ����������� ������, ����� ���������� �������, ����� ������� ����
void deleteElement(CircleList* list, CircleListElement* prevElement); 
// ������������ ������ � ������(���������), ����� ���������� ������� ������
// �� ������������ ������� ������(������ ����� ��� �� �����������)
CircleListElement* addElement(CircleList* list, CircleListElement* prevElement); 

void setNumber(CircleListElement* element, int number);
int getNumber(CircleListElement* element);
void circleIt(CircleListElement* tail, CircleListElement* head); // �������������� ������
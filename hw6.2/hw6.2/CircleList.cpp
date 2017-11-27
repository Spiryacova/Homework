#include <iostream>
#include "CircleList.h"

// Структуры
struct CircleListElement {
	CircleListElement* next = nullptr;
	int number = 0;
};

struct CircleList {
	CircleListElement* head = nullptr;
	int size = 0;
};

// Функции, ч.1.
int getSize(CircleList* list) {
	return (list->size);
};

CircleList* createList() {
	CircleList* list = new CircleList;
	list->size = 1;
	list->head = new CircleListElement;
	list->head->number = 1;
	return list;
};

CircleListElement* getHead(CircleList* list) {
	return list->head;
};

void deleteList(CircleList* list) {
	while (getSize(list) > 1) {
		deleteElement(list, list->head);
	}
	delete list->head;
};

void deleteElement(CircleList* list, CircleListElement* prevElement) {
	if (getSize(list) == 1) {
		return;
	}
	CircleListElement* temp = nullptr;
	if (prevElement->next->next == getHead(list)->next) {
		temp = getHead(list);
		list->head = temp->next;
	}
	else {
		temp = prevElement->next;
	}
	prevElement->next = temp->next;
	delete temp;
	list->size -= 1;
};

// Функции, ч.2.
CircleListElement* getNext(CircleListElement* prevElement) {
	return prevElement->next;
};

CircleListElement* addElement(CircleList* list, CircleListElement* prevElement) {
	prevElement->next = new CircleListElement;
	list->size += 1;
	return prevElement->next;
};

void setNumber(CircleListElement* element, int inNumber) {
	element->number = inNumber;
};

int getNumber(CircleListElement* element) {
	return element->number;
};

void circleIt(CircleListElement* tail, CircleListElement* head) {
	tail->next = head;
};
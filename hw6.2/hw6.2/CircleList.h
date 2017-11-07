#pragma once

struct CircleList;
struct CircleListElement;

// Функции списка
int getSize(CircleList* list);
CircleList* createList();
void deleteList(CircleList* list);
CircleListElement* getHead(CircleList* list);

// Функции собственно элементов списка
CircleListElement* getNext(CircleListElement* prevElement);
// Как в односвязном списке, нужен предыдущий элемент, чтобы удалить этот
void deleteElement(CircleList* list, CircleListElement* prevElement); 
// Используется только в начале(программы), чтобы собственно создать список
// НЕ ИСПОЛЬЗУЕТСЯ ПОСРЕДИ СПИСКА(только когда еще не закольцован)
CircleListElement* addElement(CircleList* list, CircleListElement* prevElement); 

void setNumber(CircleListElement* element, int number);
int getNumber(CircleListElement* element);
void circleIt(CircleListElement* tail, CircleListElement* head); // Закольцовывает список
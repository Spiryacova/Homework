#include <iostream>
#include <cmath>
using namespace std;

/*Написать программу нахождения неполного частного от деления a на b (целые числа), используя только операции сложения,
вычитания и умножения.*/
//f
//Скорее всего, не hwproj глючит, а я ошиблась
int main()
{
    int numerator = 0; //Числитель
    int denominator = 1; //Знаменатель
    int quotient = 0; //Частное
    cout << "Enter 2 integers" << endl;
    cin >> numerator >> denominator;
    int sign = numerator*denominator; //Значение sign не важно, нужен только знак
    while (abs(quotient*denominator) <= abs(numerator)){
        ++quotient;
    }
    if (sign > 0){
        --quotient;
    }
    else {
        quotient = -quotient;
        ++quotient;
    }
    cout << endl << "Result: " << quotient << endl;
    return 0;
}

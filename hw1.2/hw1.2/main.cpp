#include <iostream>
#include <cmath>
using namespace std;

/*�������� ��������� ���������� ��������� �������� �� ������� a �� b (����� �����), ��������� ������ �������� ��������,
��������� � ���������.*/
//f
//������ �����, �� hwproj ������, � � ��������
int main()
{
    int numerator = 0; //���������
    int denominator = 1; //�����������
    int quotient = 0; //�������
    cout << "Enter 2 integers" << endl;
    cin >> numerator >> denominator;
    int sign = numerator*denominator; //�������� sign �� �����, ����� ������ ����
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

#include <iostream>
using namespace std;

//Написать программу, считающую значение формулы x4 + x3 + x2 + x + 1 за два умножения.
//f
int main()
{
    int x = 0;
    cout<<"Enter x for calculations"<<endl;
    cin>>x;

    int sqr_x = x*x; //Первое умножение
    int answer = (sqr_x + 1)*(sqr_x + x + 1) - sqr_x; //Второе умножение

    cout<<endl<<"Result: "<<answer<<endl;*/
    return 0;
}

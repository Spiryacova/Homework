#include <iostream>
using namespace std;

/*Посчитать число "счастливых билетов" (билет считается "счастливым", если сумма первых трёх цифр его номера равна
сумме трёх последних), подсчётом числа билетов с заданной суммой трёх цифр.*/
//f
int main()
{
    int sum[28]={};
    for (int i = 0; i<10; ++i){
        for (int j = 0; j<10; ++j){
            for (int k = 0; k<10; ++k){
                ++sum[i+j+k];
            }
        }
    }
    int numberOfTickets = 0;
    for (int i = 0; i<28; ++i){
        numberOfTickets+=sum[i]*sum[i];
    }
    cout << "Number of 'lucky tickets': " << numberOfTickets << endl;
    return 0;
}

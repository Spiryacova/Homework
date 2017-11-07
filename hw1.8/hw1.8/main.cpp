#include <iostream>
using namespace std;

//Написать программу, считающую количество нулевых элементов в массиве.
//f
int main()
{
    int arrLength = 0;
    cout<<"Enter length of array"<<endl;
    cin>>arrLength;
    int arr[arrLength];
    cout<<endl<<"Enter elements of array"<<endl;
    int amount0 = 0; //Количество равных 0 элементов
    for (int i = 0; i<arrLength; ++i){
        cin>>arr[i];
        if (arr[i]==0)
            ++amount0;
    }
    cout<<endl<<"Amount of elements equal to 0: "<<amount0<<endl;

    return 0;
}

#include <iostream>
using namespace std;

//Написать программу, печатающую все простые числа, не превосходящие заданного числа.
//f
int isItDivisible(int n){
    int counter = 0;
    for (int i = 2; i<n/2+1; ++i){
        if (n%i== 0){
                ++counter;
        }
    }
    return counter;
}
int main()
{
    int givenNumber = 0;
    cout << "Enter number" << endl;
    cin>>givenNumber;
    cout<<endl<<"Simple numbers below/equal to given one:"<<endl;
    for (int i = 2; i<=givenNumber; ++i){
        if (isItDivisible(i)==0){
            cout<<i<<"; ";
        }
    }
    return 0;
}

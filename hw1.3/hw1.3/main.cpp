#include <iostream>
using namespace std;

/*��� ������ ����� ����� x[1] ... x[m + n], ��������������� ��� ���������� ���� ��� ��������: ������ x[1] ... x[m] ����� m
� ����� x[m + 1] ... x[m + n] ����� n. �� ��������� �������������� ��������, ����������� ������ � �����.*/

int main()
{
    unsigned int n = 0;
    unsigned int m = 0;
    cout << "Enter 2 integers for lengths of arrays" << endl;
    cin >> n >> m;
    cout << endl << "Enter " << n+m << " integers" << endl;
    int *mnArray = new int [n+m];
    for (unsigned int i = 0; i<n+m; ++i){
        cin >> mnArray[i];
    }
    for (int i = n-1; i>=0; --i) {
        for (unsigned int j = i; j<m+i; ++j) {
            int swapper = mnArray[j+1];
            mnArray[j+1] = mnArray[j];
            mnArray[j] = swapper;
        }
        /*for (int j = 0; j<m+n;++j){
            cout<<mnArray[j]<<" ";
        }
        cout<<endl;*/
    }
    for (unsigned int i = 0; i<m+n; ++i) {
        cout << mnArray[i] <<", ";
    }
    delete [] mnArray;
    return 0;
}

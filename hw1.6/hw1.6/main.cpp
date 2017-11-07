#include <iostream>
#include <string>
using namespace std;

//Заданы две строки: S и S1. Найти количество вхождений S1 в S как подстроки.
//f
int s1INs(string s, string s1){
    int sizes = s.size();
    int sizes1 = s1.size();
    if (sizes1 > sizes) {
        return 0;
    }
    int counter = 0;

    for (int i = 0; i < sizes; ++i) {
        if ((s1[0] == s[i]) && (i + sizes1 <= sizes)) {
            int isEqual = 0;
            for (int j = 0; j < sizes1; ++j) {
                if (s[i + j] == s1[j]){
                    ++isEqual;
                }
            }
            if (isEqual == sizes1) {
                i += isEqual - 1;
                ++counter;
            }
        }
    }
    return counter;
}

int main()
{
    string s;
    string s1;

    cout << "Enter string you want to find" << endl;
    cin >> s1;
    cout << endl << "Enter string to find in" << endl;
    cin >> s;
    cout << endl << "First one appears in second " << s1INs(s, s1) << " times" << endl;
    return 0;
}

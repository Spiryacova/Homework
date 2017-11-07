#include <iostream>
#include <string>

using namespace std;

/*Написать программу проверки баланса скобок в исходной строке
(т.е. число открывающих скобок равно числу закрывающих и выполняется правило вложенности скобок)*/
//f
bool isBalanced(string s){
    string bracketsOnly = ""; //To keep brackets here (for example if there were other symbols in the string)
    for (int i = 0; i < s.size(); ++i) {
        if ((s[i] == '(') || (s[i] == '[') || (s[i] == '{') || (s[i] =='<')) {
            bracketsOnly += s[i];
        }
        if (s[i] == ')') {
            if (bracketsOnly[bracketsOnly.size() - 1] == '(') {
                bracketsOnly.erase(bracketsOnly.size() - 1, 1);
            }
            else {
                return false;
            }
        }
        if (s[i] == '}') {
            if (bracketsOnly[bracketsOnly.size() - 1] == '{') {
                bracketsOnly.erase(bracketsOnly.size() - 1, 1);
            }
            else {
                return false;
            }
        }
        if (s[i] == ']') {
            if (bracketsOnly[bracketsOnly.size() - 1] == '[') {
                bracketsOnly.erase(bracketsOnly.size() - 1, 1);
            }
            else {
                return false;
            }
        }
        if (s[i] == '>') {
            if (bracketsOnly[bracketsOnly.size() - 1] == '<') {
                bracketsOnly.erase(bracketsOnly.size() - 1, 1);
            }
            else {
                return false;
            }
        }
    }
    return (bracketsOnly.size() == 0);
}

int main(){
    string str = "";
    cout << "Enter for checking balance of brackets" << endl;
    cout << "Working for (), [], {}, <>" << endl;
    cin >> str;

    cout << endl;
    if (isBalanced(str)) {
        cout << "Balanced";
    }
    else {
        cout << "Imbalanced";
    }
    return 0;
}

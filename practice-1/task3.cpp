#include "iostream"
#include "windows.h"

using namespace std;

int number;
string number_text;

int getNumber();
string getOutput(int num);

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    cout << "--<=СЛОВОСОЧЕТАНИЯ=>--" << endl << "enter number: ->>" << endl;
    while (number == 0) {number = getNumber();}
    cout  << to_string(number) + " " + getOutput(number);
    return 1;
}

int getNumber()
{
    cin >> number_text;
    try {stoi(number_text);}
    catch (invalid_argument) {
        cout << "ERR: Invalid value -> Entered value could not be converted to an intenger correctly. Try again."
             << endl;
        return 0;
    }
}

string getOutput(int num)
{
    int lastChar = num;
    while (to_string(lastChar).length() > 2){lastChar=lastChar%10;}
    if (lastChar == 11 || lastChar == 12 || lastChar == 13 || lastChar == 14) {return "яблок";}
    else {
        switch (lastChar) {
            case 1: {
                return "яблоко";
            }
            case 2: {
                return "яблока";
            }
            case 3: {
                return "яблока";
            }
            case 4: {
                return "яблока";
            }
            default: {
                return "яблок";
            }
        }
    }
}

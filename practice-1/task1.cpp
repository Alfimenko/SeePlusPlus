#include "iostream"
#include "string"
#include "bits/stdc++.h"

using namespace std;

void printInfo();

double getNum1();
double getNum2();
void getOperationResult(double num2, double num1);

double num_1;
double num_2;

int main()
{
    printInfo();
    while (num_1 == NULL){getNum1();}
    while (num_2 == NULL){getNum2();}
    getOperationResult(num_2, num_1);
    return 1;
}

void getOperationResult(double num2, double num1) {
    char id_text;
    cout << "Enter operation symbol (valid inputs: '+', '-', '*', '/', '^', 'sqrt'):" << endl;
    cin >> id_text;
    switch (id_text) {
        case '+': {cout << to_string(num1) + " + " + to_string(num2) + " = " + to_string(num1 + num2);break;}
        case '-': {cout << to_string(num1) + " - " + to_string(num2) + " = " + to_string(num1 - num2);break;}
        case '*': {cout << to_string(num1) + " * " + to_string(num2) + " = " + to_string(num1 * num2);break;}
        case '/': {cout << to_string(num1) + " * " + to_string(num2) + " = " + to_string(num1 / num2);break;}
        case '^': {cout << to_string(num1) + " ^ " + to_string(num2) + " = " + to_string(pow(num1, num2));break;}
        case 's': {cout <<"Square root of " + to_string(num1) + " = " + to_string(sqrt(num1));break;}
        default: {cout << "ERR: INVALID OPERATOR";}
    }
}

double getNum1()
{
    string num_1_text;
    cout << "Enter first number:" << endl;
    cin >> num_1_text;
    bool isValid = true;
    try {stod(num_1_text);}
    catch (invalid_argument) {
        cout << "ERR: INVALID double" << endl;
        isValid = false;}
    if (isValid) {num_1 = stod(num_1_text);}
    return num_1;
}

double getNum2()
{
    string num_2_text;
    cout << "Enter second number:" << endl;
    cin >> num_2_text;
    bool isValid = true;
    try {stod(num_2_text);}
    catch (invalid_argument) {
        cout << "ERR: INVALID double" << endl;
        isValid = false;}
    if (isValid) {num_2 = stod(num_2_text);}
    return num_2;
}



void printInfo() {
    cout
            <<"---<==CALCULATOR==>---"
            <<endl
            <<"Small calculator with 6 simple methods"
            <<endl
            <<"List of operators:"
            <<endl
            <<"    + <- addition"
            <<endl
            <<"    - <- subtraction"
            <<endl
            <<"    * <- multiplication"
            <<endl
            <<"    / <- division"
            <<endl
            <<"    ^ <- power"
            <<endl
            <<"    s <- square root (NOTE: Second variable has no meaning in this case)"
            <<endl
            ;
}

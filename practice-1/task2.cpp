#include <unistd.h>
#include "iostream"

using namespace std;

string seconds_text;
int seconds_left;

int getTime();

int main()
{
    cout
        << "--<=COUNTDOWN=>--"
        << endl
        << "Enter number of seconds and program will countdown till 0 for you!"
        << endl;
        while (seconds_left == 0){seconds_left = getTime();}
        for (int i = seconds_left; i > -1; --i) {
            cout << to_string(i) << endl;
            sleep(1);
            if (i == 0){cout<<"end";}
        }
    return 1;
}

int getTime() {
    cout << "Enter your number: -> " << endl;
    cin >> seconds_text;
    try {stoi(seconds_text);}
    catch (invalid_argument){
        cout << "ERR: Invalid value -> Entered value could not be converted to an intenger correctly. Try again." << endl;
        return 0;
    }
    return stoi(seconds_text);
}

#include <iostream>
#include <string>

using namespace std;

int main(void) {
    bool a = true;
    int b = 30 + 20;

    if(!a) {
        cout << "FALSE";
    } else if (b < 49) {
        cout << "A < 49";
    } else {
        cout << "A IS TRUE AND B >= 49" << endl;
    }

    string myString = "www";

    if (myString.compare("www") == 0)
    {
        cout << "mystring is equal to www" << endl;
    }

    // SWITCH CASE

    char myGrade = 'A';
    switch(myGrade) {
        case 'A':
            cout << "You pass" << endl;
            break;
        default:
            cout << "You did not pass" << endl;
    }

    // WHILE LOOPS

    int index = 1;
    while (index < 10) {
        cout << index << ' ';
        index++;
    }

    index = 1;
    do {
        cout << index << ' ';
        index++;
    } while (index < 10);

    for (int i = 0; i < 10; i++)
    {
        cout << i << ' ';
    }

    return 0;
}
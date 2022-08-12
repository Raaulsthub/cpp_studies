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

    return 0;
}
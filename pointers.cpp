#include <iostream>
#include <string>

using namespace std;

#define OI 10

int main(void)
{
    cout << OI;

    int num = 10;
    cout << &num << endl;

    int* pointerNum = &num;
    cout << pointerNum << endl;
    cout << *pointerNum << endl;


    return 0;
}
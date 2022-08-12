#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int luckyNumbers[] = {1, 2, 3, 4, 5};

    luckyNumbers[0] = 90;

    cout << luckyNumbers[0] << endl;
    cout << luckyNumbers[1] << endl;

    int nDimentional[2][3] = {{1, 2, 3}, {4, 5, 6}};
    nDimentional[1][1] = 30;

    cout << nDimentional[1][1] << endl;
    cout << nDimentional[0][2] << endl;
}
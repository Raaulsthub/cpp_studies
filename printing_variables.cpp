#include <iostream> // input and output
#include <string> // strings 

using namespace std;

int main() {

    // PRINTING
    cout << "Hello, world!" << endl; //endl prints a \n
    
    // VARIABLES
    
    string name = "Mike";
    char testGrade = 'A';
    
    // integers
    short age0 = 10; // at least 16-bits signed integer
    int age1 = 20; // at least 16-bits signed integer
    long age2 = 30; // at least 32-bits signed integer 
    long long age3 = 40; // at least 64 bits signed integer 
    // we can make all of this unsigned using 'unsigned prefix'
    
    // floats
    float gpa0 = 2.5f; // single precision floating point
    double gpa1 = 3.5; // double-prcision floating point
    long double gpa2 = 3.5; // extended-precision floating point

    // booleans
    bool istall = true; 

    // changing variables
    name = "John";
    cout << "Your name is " << name << endl;

    // constants - cant be changed
    int const BIRTH_YEAR = 1945;

    cout << "Birth year is " << BIRTH_YEAR <<endl;
    
    // CASTING
    
    return 0;
}
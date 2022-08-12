#include <iostream>
#include <string>

using namespace std;

class Chef {
    public:
        int age;

        Chef(int age) {
            this->age = age;
        }

        void makeChicken() {
            cout << "The chef makes chicken" << endl; 
        }
        void makeSalad() {
            cout << "The chef makes salad" << endl; 
        }
        void makeSpecialDish() {
            cout << "The chef makes special dish" << endl; 
        }
};

class ItalianCheff: public Chef {
    public:
        int trophes;
        ItalianCheff(int age, int trophes) : Chef(age) {
            this->trophes = 2;
        }
        void makePasta() {
            cout << "The Chef is making pasta" << endl;
        }

        // override
        void makeSpecialDish() {
            cout << "The chef makes chicken parm" << endl;
        }

};

int main(void) {
    Chef a(18);
    a.makeChicken();
    ItalianCheff b(20, 4);
    b.makeChicken();
    a.makeSpecialDish();
    b.makeSpecialDish();

    return 0;
}
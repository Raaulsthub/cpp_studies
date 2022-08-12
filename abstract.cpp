#include <iostream>
#include <string>

using namespace std;

class Vehicle {
    public:
        virtual void move() = 0; // abstract
        void getDescription() {
            cout << "Veicles are used for transportation" << endl;
        }
};

class Bicycle: public Vehicle {
    public:
        void move() {
            cout << "The bicycle is moving" << endl;
        }
        void getDescription () {
            cout << "Its a bike doug" << endl;
        }
};

int main(void) {
    Bicycle bike;
    bike.getDescription();
    bike.move();
}
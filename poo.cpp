#include <iostream>
#include <string>

using namespace std;

class Book {
     private:
        int price;

    public:
        string title;
        string author;
        
        void readBook() {
            cout << "Reading " + this->title + " by " + this->author << endl;
        }

        void setPrice(int price)
        {
            this->price = price;
        }
        int getPrice()
        {
            return price;
        }


};

class Doug {
    public:
        string name;

        Doug(string name)
        {
            this->name = name;
        }
};

int main(void) {
    Book book;
    book.author = "Wilson";
    book.title = "Fundamental rights";

    book.readBook();

    cout << book.title << endl;

    book.setPrice(10);
    cout << book.getPrice() << endl;

    Doug myDoug("CHUAIZER");

    cout << myDoug.name << endl;

    return 0;

}
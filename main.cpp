#include <iostream>

using namespace std;

class Book{
public:
    string title;
    int pages;
    double price;
};

int main()
{
Book book1;
book1.title = "Wings of Fire";
book1.pages = 345;
book1.price = 110.50;

cout<< book1.price;
    return 0;
    }


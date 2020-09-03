#include <iostream>

using namespace std;

class Book{
public:
    string title;
    int pages;
    double price;
    Book (string aTitle, int aPages, double aPrice){
          title = aTitle;
          pages = aPages;
          price = aPrice;
    }
    bool goodprice(){
    if(price >= 120){
        return true;
    }
        return false;
    }
};

int main()
{
Book book1("Wings of Fire",345,110.50);
Book book2("Harry Potter",500,126.20);


cout<< book1.goodprice();
    return 0;
    }


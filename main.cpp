#include <iostream>

using namespace std;


int main()
{
/*int age = 19;
double gpa = 8.4;
string name= "bishwa";

cout<< "Age:"<< &age<< endl;
cout<< "Gpa:"<< &gpa<<endl;
cout<< "Name:"<< &name<< endl;*/

int age = 19;
int *pAge = &age;
double gpa = 8.4;
double *pGpa = &gpa;
string name= "bishwa";
string *pName = &name;

cout<< *pGpa;

    return 0;
    }


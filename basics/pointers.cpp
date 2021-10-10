#include<iostream>
using namespace std;

int main(){

    string name = "Karl";
    int age = 19;
    double gpa = 4.0;

    string *pName = &name;
    int *pAge = &age;
    double *pGpa = &gpa;
    string &andName = name;

    cout << "asterisk " << *pName << endl;
    cout << "and " << &andName;

    // when using /&/ sign, it will access a memory address.
    // when using /*/ sign, it will access the information inside the memory address.
    // Pointers- variables that store address of other variables.

    return 0;
}
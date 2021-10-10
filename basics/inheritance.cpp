#include<iostream>
using namespace std;

class filipinoCheff{
    public:
    
    void makeAdobo(){
        cout << "Cooks adobo" << endl;
    }
    void makeFriedChicken(){
        cout << "Fried a chicken" << endl;
    }

};

class anotherCheff : public filipinoCheff{
    public:
    //override
    void makeAdobo(){
        cout << "Cooks adobo but modified";
    }
};

int main(){

    anotherCheff test;
    test.makeFriedChicken();
    test.makeAdobo();
    return 0;
}
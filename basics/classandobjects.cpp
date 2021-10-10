#include<iostream>
using namespace std;

class details{
    private:
    string name;

    public:
    int age;
    
    
    details(string aName, int aAge){
        setName(aName);
        age = aAge;
    }

    void setName(string sName){
        name = sName;
    }

    string getName(){
        return name;
    }
};

int main(){
    details test("Karl Marx", 19);
     
    cout << test.getName();

    return 0;
}
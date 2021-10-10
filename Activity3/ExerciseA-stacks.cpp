#include <iostream>
#include <stack>
using namespace std;



void stackUsingSTACKS(){
    int input = 0;
    int result = -999;
    stack<int> stack1;
    stack<int> reverseStack;


    while(input != 999){
    cout << "Enter a number: ";
    cin >> input;
    result = result + input;
    stack1.push(input);
    
    }
    int stackSize = stack1.size()-1;


    stack1.pop();
    while(!stack1.empty()){
        reverseStack.push(stack1.top());\
        stack1.pop();
    }
    cout << "Numbers in STACK: ";
    while(!reverseStack.empty()){
        cout << reverseStack.top() << " ";
        reverseStack.pop();
    }

    double AVERAGE = result / stackSize;
    cout << endl <<  "AVERAGE: " << AVERAGE;
}


int main() {

    stackUsingSTACKS();

   
  
}
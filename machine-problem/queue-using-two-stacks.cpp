#include<iostream>
#include<stack>
using namespace std;


int main(){
    stack<int> stack1;
    stack<int> stack2_out;

    if(stack2_out.empty()){
        while(!stack1.empty()){
            stack2_out.push(stack1.top());
            stack1.pop();
        }
    }
    while(!stack2_out.empty()){
        cout << stack2_out.top() << " ";
        stack2_out.pop();
    }
return 0;

}
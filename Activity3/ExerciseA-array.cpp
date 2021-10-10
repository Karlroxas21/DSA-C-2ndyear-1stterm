#include <iostream>
using namespace std;

int stack[100], n=100, top=-1;
void push(int val) {
   if(top>=n-1)
   cout<<"Stack Overflow"<<endl;
   else {
      top++;
      stack[top]=val;
   }
}
void pop() {
   if(top<=-1)
   cout<<"Stack Underflow"<<endl;
   else {
      cout<<"The popped element is "<< stack[top] <<endl;
      top--;
   }
}

void stacksUsingARRAY(){
   int ch, val;
   int result;
   cout<<"1) Push in stack"<<endl;
   cout<<"2) Pop from stack"<<endl;
   cout<<"999) Exit"<<endl;
   do {
      cout<<"Enter choice: "<<endl;
      cin>>ch;
      
      switch(ch) {
         case 1: {
            cout<<"Enter value to be pushed:"<<endl;
            cin>>val;
            push(val);
            break;
         }
         case 2: {
            pop();
            break;
         }
         case 999: {
            cout << "NUMBERS in STACK: ";
            int i;
            for(i = 0; i <= top; i++){
               result = result + stack[i];
               cout << stack[i] << " ";   
            } 
            cout << endl << "AVERAGE: " << result / i ;

            break;
         }
         default: {
            cout<<"Invalid"<<endl;
         }
      }
   }while(ch!=999);
   
}
int main() {
   
   stacksUsingARRAY();
   return 0;
}
#include<queue>
#include<iostream>
using namespace std;

int main(){

    queue<int> q;
    int input = 3;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    while(q.front() != input){
        q.pop();
    }
    cout << q.front();


    return 0;
}
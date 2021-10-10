#include <iostream>
#include <queue>
using namespace std;

int main(){

    queue<int> qq;
    queue<int> q2;
    int input = 0;

    while(input != 999){
        cout << "Enter a number: ";
        cin >> input;
        qq.push(input);
    }

    while(qq.size() != 1){
        q2.push(qq.front());
        qq.pop();
    }

    cout << "back " << q2.back() << endl;
    cout << "front " << q2.front();

    

    return 0;
}


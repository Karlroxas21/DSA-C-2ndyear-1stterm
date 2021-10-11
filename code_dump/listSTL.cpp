#include <bits/stdc++.h>
#include <iostream>
#include <list>
#include <iterator>

#define ll long long

using namespace std;

//function to print all the elements of the linked list
void showList(list <int> l){
	list <int> :: iterator it; //create an iterator according to the data structure
	for(it = l.begin(); it != l.end(); it++){
		cout<<*it<<" ";
	}
	
}	
void find(list <int> l){
	list <int> :: iterator it; 
	for(it = l.begin(); it != l.end(); it++){
		if(*it == 2){
            l.remove;
        }
	}
	
}	


int main(){
	
	list <int> l1;
	list <int> l2;
	
	for(int i=0; i<10; i++){
		l1.push_back(i*2); //fill list 1 with multiples of 2
		l2.push_back(i*3); //fill list 2 with multiples of 3
	}
	
	cout<<"content of list 1 is "<<endl;
	showList(l1);
	cout<<endl;
	
	cout<<"content of list 2 is "<<endl;
	showList(l2);
	cout<<endl;
	
	//reverse the first list
	l1.reverse();
	showList(l1);
	cout<<endl;
	
	//sort the first list
	l1.sort();
	showList(l1);
    find(l1);
	cout<<endl;

	
	//removing an element from both sides
	l2.pop_front();
	l2.pop_back();
    

	
	//adding an element from both sides
	l2.push_back(10);
	l2.push_front(20);
	
	
    return 0;
}
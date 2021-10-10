#include<iostream>
using namespace std;

/* Assuming that the quiz is up to 100. */

int main(){
    int total_score = 0;
    int five_quizzes = 5;
    int input = 0;
    double averageScore;
    int perfectGrade = 500;
    
    for(int i = 0; i < 5; i++){
        cout << "Enter score: " << endl;
        cin >> input;
        total_score = total_score + input;
    }
   
    
    averageScore = total_score / five_quizzes;

    cout << "-------------" << endl;
    cout << "Average score: " << averageScore << endl;
    cout << "-------------" << endl;
    
    if(total_score > perfectGrade * .60){
        cout << "STATUS : PASSED" << endl;
        cout << "-------------" << endl;
    }else{
        cout << "STATUS : FAILED" << endl;
        cout << "-------------" << endl;
    }
    return 0;
}
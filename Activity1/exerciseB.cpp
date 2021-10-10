#include<iostream>
using namespace std;

/*Assume if input is 0, automatically ends.
  100 or 4 is perfect grade. <60% is failed

4.00 	96 – 100% 	Excellent
3.50 	90 – 95% 	Very Good
3.00 	84 – 89% 	Good
2.50 	78 – 83% 	Above Satisfactory
2.00 	72 – 77% 	Satisfactory
1.50 	66 – 71% 	Fair
1.00 	60 – 65% 	Passed
0.00 	Failure 	Failed
R 	< 60% 	Repeat/Failed

 */

int main(){
    int repeats = 0-1;
    int input = 0;
    int total_score = 0;
    bool loop = true;
    int average_Score = 0;

    while(loop){
        repeats ++;
        cout << "Enter score: " << endl;
        cin >> input;
        total_score = total_score + input;
        if(input == 0){
            loop = false;
        }
    }
    average_Score = total_score / repeats;
    if(average_Score >= 96){
        cout << "----------" << endl;
        cout << "4.0" << endl;
    } else if(average_Score >= 90){
        cout << "----------" << endl;
        cout << "3.5" << endl;
    }else if(average_Score >= 84){
        cout << "----------" << endl;
        cout << "3.0" << endl;
    }else if(average_Score >= 78){
        cout << "----------" << endl;
        cout << "2.5" << endl;
    }else if(average_Score >= 72){
        cout << "----------" << endl;
        cout << "2.0" << endl;
    }else if(average_Score >= 66){
        cout << "----------" << endl;
        cout << "1.5" << endl;
    }else if(average_Score >= 60){
        cout << "----------" << endl;
        cout << "1.0" << endl;
    }else{
        cout << "----------" << endl;
        cout << "Failure" << endl;
    }


    return 0;
}
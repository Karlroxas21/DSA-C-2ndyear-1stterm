#include<iostream>
using namespace std;


int main(){
   int number = 21;
   int guessCount = 0;
   int guess;
   bool outOfGuess = false;


   while(guess != number && !outOfGuess){
      if(guessCount < 5){
         cout << "Guess a number: ";
         cin >> guess;
         guessCount++;
      }else{ 
         outOfGuess = true;
         }
   }
   if(outOfGuess){
      cout << "Out of guesses" << endl;
   }else{
      printf("You win");
   }

   return 0;
}
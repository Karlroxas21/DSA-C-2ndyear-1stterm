#include<iostream>
using namespace std;

int main (){
    int vowels, consonants, spaces;

    vowels = consonants = spaces = 0;
    string sentence = " ";

    cout << "Enter a sentence please: " << endl;

    getline(cin, sentence);

    for(int i = 0; i < sentence.length(); i++){
        if(sentence[i] == 'a' || sentence[i] == 'e' || sentence[i] == 'i' ||
           sentence[i] == 'o' || sentence[i] == 'u' || sentence[i] == 'A' ||
           sentence[i] == 'E' || sentence[i] == 'I' || sentence[i] == 'O' ||
           sentence[i] == 'U'){
               ++vowels;
           }else if(sentence[i] >= 'a' && sentence[i]<='z' || sentence[i]>='A' && sentence[i]<='B' ){
               ++consonants;
           }else if(sentence[i] == ' '){
               ++spaces;
           }
    }
    cout << "-------------" << endl;
    cout << "Vowels: " << vowels << endl;
    cout << "-------------" << endl;
    cout << "Consonants: " << consonants << endl;
    cout << "-------------" << endl;
    cout << "Spaces: " << spaces << endl;
    cout << "-------------" << endl;

    return 0;
}


/*
CH-230-A
a9 p10.[c or cpp or h]
Jose Biehl
j.biehl@jacobs-university.de
*/
#include <iostream>
using namespace std;
//QUESTIONS ARE VERY AMBGUOUS, THIS IS WHAT I TOOK THEM TO MEAN
//removes vowels from a string
string remove_vowel(string s){
    string vowels = "aeiou";
    for (int i = 0; s[i] != '\0'; i++){
        for (int j = 0; j < 5; j++){
            if (s[i] == vowels[j]){
                s[i] = '_';
            }
        }
    }
    return s;
}


int main(int argc, const char * argv[]) {
    // insert code here...
    //initialize array of strings
    string* wordslist = new string[17];
    wordslist[0] = "computer";
    wordslist[1] = "television";
    wordslist[2] = "keyboard";
    wordslist[3] = "laptop";
    wordslist[5] = "mouse";
    //fill rest of array with input
    cout<<"enter your own words"<<endl;
    for (int i = 6; i <= 16; i++){
        cin>>wordslist[i];
    }
    int randomNumber;
    string placeholder;
    //rng generation
    srand ( static_cast < unsigned int >( time (0) ) );
    while(1){
        randomNumber = (rand ()) % 17;
        string exit = "\0";
        int count = 0;
        cout<<remove_vowel(wordslist[randomNumber])<<endl;
        //keep trying for correct input
        while (wordslist[randomNumber] != placeholder){
            cin>>placeholder;
            count++;
        }
        cout<<"guessed correctly in "<<count;
        cout<< " tries, input 'exit' to stop, any other string  to continue"<<endl;
        cin>>exit;
        //if exit is the same as the input we finish the program

        if (exit.compare("exit") == 0)
            break;
    }
    delete [] wordslist;

    return 0;
}

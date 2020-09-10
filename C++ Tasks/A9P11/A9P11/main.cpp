/*
CH-230-A
a9 p11.[c or cpp or h]
Jose Biehl
j.biehl@jacobs-university.de
*/
#include <iostream>
#include <string>
using namespace std;
//test if is palindrome
bool ispalindrome(string s){
    long unsigned int i;
    long unsigned int count = 0;
    //find match of string parsed forwards and string parsed backwards
    for (i = 0; i < s.length(); i++){
        if (s[i] == s[s.length()-1-i])
            count++;
    }
    if (count == i){
        return true;
    }
    else{
        return false;
    }
}
int main(int argc, const char * argv[]) {
    string word;
    while(1){
        cout<<"enter a word: "<< endl;
        cin>>word;
        if (word.compare("exit") == 0)
            break;
            //if word is palindrome, print true, else false.
        cout<< (ispalindrome(word) == 1? "true" : "false")<<endl;
    }
    return 0;
}

/*
CH-230-A
a9 p7.[c or cpp or h]
Jose Biehl
j.biehl@jacobs-university.de
*/
#include <string>
#include <iostream>
using namespace std;
bool iscons(char c){
    string consonants = "bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ";
    for (int i = 0; consonants[i] != '\0'; i++){
        if(c == consonants[i]){
            return true;
        }
    }
    return false;
}
//find first even positive num
int myfirst(int arr[], int n){
    for (int i = 0; i < n; i++){
        if( arr[i] % 2 == 0 && arr[i] > 0)
            return arr[i];
    }
    //if nothing is found
    return -1;
}
//find first non-dividable-thingie float that's negative
float myfirst(float arr[], int n){
    for (int i = 0; i < n; i++){
        if( (int) arr[i] == arr[i] && arr[i] < 0)
            return arr[i];
    }
    //if nothing is found
    return -1.1;
    }
//find first consonant
char myfirst(string arr){
    for(int i = 0; arr[i] != '\0'; i++){
        if (iscons(arr[i])) { return arr[i]; }
    }
    //if nothing is found
    return '0';
}

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int numarr[10] = {1, 3, -2, 5,8,9, 8, 1, 100};
    float floatarr[10] = {1.1, 2.2, 3999, -2.222, -5, -10, 2345};
    string str = "aaaaaaChooo";
    //should print 8
    cout<< myfirst(numarr, 10)<<endl;
    //should print -5
    cout<< myfirst(floatarr, 10)<<endl;
    //should print C
    cout<< myfirst(str)<<endl;
    
    int numarr2[10] = {-1, -2, -3, -4, 5, 9, 101, -101};
    float floatarr2[10] = {-9.9, 2099 , 30293, 294852, 292929};
    string str2 = "aaaaaAAAAAAAAaaaaa";
    
    //should print -1
       cout<< myfirst(numarr2, 10)<<endl;
       //should print -1.1
       cout<< myfirst(floatarr2, 10)<<endl;
       //should print 0 as char
       cout<< myfirst(str2)<<endl;
       
    return 0;
}

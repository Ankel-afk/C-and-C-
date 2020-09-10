/*
CH-230-A
a9 p4.[c or cpp or h]
Jose Biehl
j.biehl@jacobs-university.de
*/
#include <iostream>
using namespace std;
//case ints
int mycount(int a, int b){
    return b - a;
}
//case chars and strings
int mycount(char c, string s){
    int i = 0;
    int count = 0;
    while (s[i] != '\0'){
        if (s[i] == c)
            count++;
        i++;
    }
    return count;
}
//case nothing in func
int mycount(){
    return 0;
}
int main(){
    int a, b;
    char c;
    string s, sbuffer;
    cout<<"enter ints: ";
    cin>>a;
    cin>>b;
    cout<<"count is " << mycount(a,b) <<endl;
    cout<<"enter char ";
    cin>>c;
    cout<<"enter string ";
    //getline takes \n as new string
    getline(cin, sbuffer);
    getline(cin, s);
    cout<<"count is " << mycount(c,s) << endl;
    cout<<mycount()<<endl;
    
    return 0;
    
    
    
}

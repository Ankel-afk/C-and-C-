/*
CH-230-A
a9 p2.[c or cpp or h]
Jose Biehl
j.biehl@jacobs-university.de
*/
#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
int main(int argc, const char * argv[]) {

    int n;
    cout<<"enter n ";
    cin>>n;
    double x;
    cout<<"enter x ";
    cin>>x;

    string strash, s;
    cout<<"enter s ";
    //cin ignores spaces so I used getline
    getline(cin, strash);
    getline(cin, s);
    //print string and double n times
    for (int i = 0; i < n; i++){
        cout<<s<<":"<<x<<endl;
    }
    return 0;
}

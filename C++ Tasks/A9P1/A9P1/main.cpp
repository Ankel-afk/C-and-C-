/*
CH-230-A
a9 p1.[c or cpp or h]
Jose Biehl
j.biehl@jacobs-university.de
*/

#include <iostream>
#include <cstdio>
using namespace std;
int main(int argc, const char * argv[]) {
//my country's name contains spaces so I used getline
    char country[25];
    cin.getline(country, 25);
    cout << "country is: "<< country << endl;
    return 0;
}

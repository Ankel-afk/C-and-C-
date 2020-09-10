/*
CH-230-A
a13 p7.[c or cpp or h]
Jose Biehl
j.biehl@jacobs-university.de
*/
#include <iostream>
#include <vector>
using namespace std;
int main(int argc, const char * argv[]) {
    vector<int> v(20, 8);
   /* for (int x : v){
        cout<<x<<" ";
    }*/
    try {
        cout<<v.at(20);
    } catch (std::out_of_range& a) {
        cerr<< a.what()<<endl;

    }

    return 0;
}

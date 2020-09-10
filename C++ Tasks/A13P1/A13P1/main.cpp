/*
CH-230-A
a13 p1.[c or cpp or h]
Jose Biehl
j.biehl@jacobs-university.de
*/
#include <regex>
#include <iostream>
#include <string>
#include <fstream>
#include <ostream>

using namespace std;


int main(int argc, const char * argv[]) {
    // insert code here...
    string fname;
    cout<<"enter file name: ";
    
    cin>>fname;
    string realname = fname;
    string originalname = "";
    int i;
    for (i = sizeof(fname)- 1; i >= 0; i--){
        if (fname[i] == '.'){
            //copy until the .
            break;
        }
    }
    //add copy name
    fname.insert(i, "_copy");
    
    cout<<fname<<endl;
    
    
    ifstream src(realname);
    if (!src.good()){
        cout<<"File not found"<<endl;
        exit(1);
    }
    ofstream out(fname);
    if (!out.good()){cout<<"error opening output file"; exit(2);}
    
    //use a string because it works
    string str;
    while(getline(src, str)){
        out << str<<endl;
        
    }
    
    return 0;
}



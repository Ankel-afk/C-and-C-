/*
CH-230-A
a13 p3.[c or cpp or h]
Jose Biehl
j.biehl@jacobs-university.de
*/

/*
Write a program which reads from the standard input an integer value n, followed by n file
names. Your program has to concatenate the content of the n files and write the result into the
file called “concatn.txt” using binary read and write. Add a ’\n’ to separate the contents of
the different files inside the resulting file. The operation of the concatenation is successful only if
all files are existing and their opening was successful.
You can assume that the input will be valid and the necessary input files have a valid content if
existing*/

#include <iostream>
#include <ostream>
#include <string>
#include <fstream>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int n;
    cout<<"enter int n: ";
    cin>>n;
    string fname;
    string str;
    ifstream* filelist = new ifstream[n];
    for (int i =0; i < n; i++){
        cout<<"enter file name ";
        cin>>fname;
        filelist[i].open(fname, ios::binary);
        if (!filelist[i].good()){
            cout<<"error opening file name "<<fname<<endl;
            exit(1);
        }
    }
    ofstream out("concatn.txt", ios::binary);
    for (int i = 0; i < n; i++){
        while (getline(filelist[i], str)){
            out<<str<<endl;
        }
        out<<endl;
    }
    delete [] filelist;
    
    
    
    
    return 0;
}

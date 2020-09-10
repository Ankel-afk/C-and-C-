/*
CH-230-A
a9 p5.[c or cpp or h]
Jose Biehl
j.biehl@jacobs-university.de
*/

#include <iostream>
#include <string>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...

    bool cont = true;
    string s = "";
    while (cont == true){
        string placeholder;
        getline(cin, placeholder);
        if (placeholder == "quit"){
            cont = false;
        }
        else{
            //append placeholder to string unless it is exit
            s.append(placeholder);
        }
    }
    //METHODS ARE BACK BABYYY
    for(int i = 0; s[i] != '\0'; i++){
        //erase space if found
        if (s[i] == ' '){ s.erase(i, 1);}
    }
    cout << s << endl;
    return 0;

}

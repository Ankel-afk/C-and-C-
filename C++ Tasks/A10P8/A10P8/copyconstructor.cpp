
/*
CH-230-A
a10 p8.[c or cpp or h]
Jose Biehl
j.biehl@jacobs-university.de
*/
#include <iostream>
#include <cstring>  // standard C string.h header file

using namespace std;

/*
    Naive string: the goal is to illustrate how copy constructors
    should be handled. See also charbuffer.cpp
*/

class NaiveString {
private:
    char *str;
public:
    NaiveString(const char*);
    NaiveString(const NaiveString&);
    void update(char, char);
    void print();
    //destructor gets rid of dynamic memory allocation
    ~NaiveString(){
      cout<<"freeing strings...\n";
      delete [] str;
    }
};

NaiveString::NaiveString(const char* t) {
    str = new char[strlen(t) + 1];
    strcpy(str, t);
    cout<<"Constructing NaiveString from const char*"<<endl;
}
/*
    Copy constructor: creates a new instance of
    naive string starting from an existing one
*/
NaiveString::NaiveString(const NaiveString& src) {
    str = new char[strlen(src.str) + 1];
    strcpy(str, src.str);
    cout<<"Copy constructor being called"<<endl;
    // please note that we can access src.str even if it is private
    // as we are inside the NaiveString class
}

/* replaces occurrences of oldchar by newchar */
void NaiveString::update(char oldchar, char newchar) {
    unsigned int i;
    for (i = 0; i < strlen(str); i++)
        if (str[i] == oldchar)
            str[i] = newchar;
}

void NaiveString::print() {
    cout << str << endl;
}


//will use copy constructor to make a new NaiveString
void funcByVal(NaiveString s) {
    s.update('B', 'C');
    cout<<"func by val being called\n";
    s.print();

}
//passes a NaiveString as a reference, no copy constructor needed
void funcByRef(NaiveString& s){
  cout<<"func by ref being called\n";
    s.update('B', 'C');
    s.print();
}

int main(int argc, char** argv)
{
    NaiveString a("aBcBdB");
    //copy constructor example
    NaiveString b(a);
    a.print();
    //functionbyVal creates a new NaiveString that is destroyed at the end
    cout << "About to call funcbyval()" << endl;
    funcByVal(a);
    //a is unchanged
    a.print();
    cout<< "About to call funcbyref()" <<endl;
    //b object changes because a reference was passed.
    funcByRef(b);
    b.print();
    //DESTRUCTORS WILL BE CALLED WHEN MAIN ENDS (CHECK CONSOLE OUTPUT)
    return 0;
}

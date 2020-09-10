//
//  main.cpp
//  PP17
//
//  Created by Jose Ignacio Biehl on 07.12.19.
//  Copyright © 2019 Jose Biehl. All rights reserved.
//

#include <iostream>
#include <string>
class Book {
private:
    char* title;
    int pages;
public:
    Book(const Book& cpy){
        pages = cpy.pages;
        title = new char[strlen(cpy.title)];
        strcpy(title, cpy.title);
    
    }
    //COPY CONSTUCTOR DEFAULT WILL MAKE ANOTHER POINTER THAT POINTS TO THE SAME MEMORY SPACE AS THE PREVIOUS ONE
Book(const char* t, int p);
Book();
// ...
// setter and getter methods omitted
};

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

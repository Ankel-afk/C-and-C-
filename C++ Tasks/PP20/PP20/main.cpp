//
//  main.cpp
//  PP20
//
//  Created by Jose Ignacio Biehl on 07.12.19.
//  Copyright © 2019 Jose Biehl. All rights reserved.
//

#include <iostream>
using namespace std;
class worker{
private:
    string name;
    int number;
    
public:
    worker(int i, string n){
        name = n;
        number = i;
    }
    friend ostream& operator<<(std::ostream& out, worker w){
        return out<<w.name<<" "<<w.number<<" "<<endl;
    }
    
    
    
    
};
int main() {
worker a(234, "John McEnroe");
worker b(324, "Jack Nicholson");
cout << a << b;
return 0;
}


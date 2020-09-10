//
//  main.cpp
//  PP23
//
//  Created by Jose Ignacio Biehl on 07.12.19.
//  Copyright © 2019 Jose Biehl. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    using namespace std;
    
    int x;
    int y;
    
    cin>>x;
    cin>>y;
    
    
    try{
        if( y == 0)
            throw std::logic_error("Division by zero");
        else
            cout<<x/y;
        
         
    }
    catch(std::logic_error& a){
        std::cerr<< a.what();
    }
    return 0;
}

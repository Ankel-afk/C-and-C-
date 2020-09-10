/*
CH-230-A
a9 p3.[c or cpp or h]
Jose Biehl
j.biehl@jacobs-university.de
*/


#include <iostream>
float abs(float x){
    if (x< 0){
        return -x;
    }
    else{
        return x;
    }
}
int main(int argc, const char * argv[]) {
    // insert code here...
    float x;
    std::cin>>x;
    std::cout<<"abs value of "<< x <<" is: "<< abs(x)<<std::endl;
    return 0;
}

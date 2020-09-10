//
//  main.cpp
//  PP15
//
//  Created by Jose Ignacio Biehl on 07.12.19.
//  Copyright © 2019 Jose Biehl. All rights reserved.
//

#include <iostream>
using namespace std;
class Car{
protected:
    std::string brand_name;
    string model_name;
    double price;
public:
    inline Car(string bname, string mname, double p){
        brand_name= bname;
        model_name = mname;
        price = p;
    }
    inline void setModel(string mname){
        model_name = mname;
    }
    ~Car(){}
    inline Car(){
        brand_name = "default name";
        model_name = "default model";
        price = 0;
    }
    
    inline string getmodel(){ return model_name;}
    inline string getbrand(){return brand_name;}
    inline double getprice(){return price;}
    
    
    
};
class Taxi: public Car{
private:
    int limit;
public:
    inline Taxi(string bname, string mname, double p, int l) : Car (bname, mname,p){
        limit = l;
    }
    inline Taxi() : Car(){
        limit = 4;
    }
    void print(){
        cout<<"brand: "<<brand_name<<"\n model: "<<model_name<<"\n price: "<<price<<endl;
        cout<<"Max passengers: "<<limit;
    }
    
    
    
};

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

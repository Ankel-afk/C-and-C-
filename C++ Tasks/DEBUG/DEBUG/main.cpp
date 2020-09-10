#include <iostream>
#include <cmath>
using namespace std;
double fast_multiply(double a, int n){
    if (n == 0)
        return 0;
    
    if (n % 2 == 0){
        auto res = fast_multiply(a, n/2);
        return res + res;
    }
    else{
        auto res = fast_multiply(a, n/2);
        return res + res + a;
    }
}
int main(){
    
    
    double a; int b;
    cin>>a;
    cin>>b;
    cout<<fast_multiply(a, b)<<endl;
    return 0;
}

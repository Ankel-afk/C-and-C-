/*
CH-230-A
a11 p1.[c or cpp or h]
Jose Biehl
j.biehl@jacobs-university.de
*/

#include <iostream>
#include "Box.h"
using namespace std;
int main(int argc, const char * argv[]) {
    int n;
    cout<<"enter n: ";
    cin>>n;
    //initializing arr
    Box *arr = new Box[2*n];
    double placeholder;
    //first heap of volumes
    for (int i = 0; i < n; i++){
      cout<<"enter height ";
      cin>>placeholder;
      arr[i].setHeight(placeholder);
      cout<<"enter width ";
      cin>>placeholder;
      arr[i].setWidth(placeholder);
      cout<<"enter depth ";
      cin>>placeholder;
      arr[i].setDepth(placeholder);
    }
//copying Box instances
    for (int i = 0; i < n; i++){
      arr[n+i] = Box(arr[i]);
    }
    //prints volumes
    for (int i = 0; i < n*2; i++){
      cout<<arr[i].calcVolume()<<endl;

    }
    delete []arr;
    return 0;
}

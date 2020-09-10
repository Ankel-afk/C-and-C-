/*
CH-230-A
a9 p9.[c or cpp or h]
Jose Biehl
j.biehl@jacobs-university.de
*/
#include <climits> 
#include <iostream>
using namespace std;
//removes largest num from each elem of array
void subtract_max(int* arr, int n){
    int max = INT_MIN;
    for (int i = 0; i <n; i++){
        if (arr[i] > max){
            max = arr[i];
        }
    }
    for (int i = 0; i < n; i++){
        arr[i] = arr[i] - max;
    }
}
//deallocates int arr
void deallocate(int* arr){
    delete [] arr;
    arr = NULL;
    
}
int main(int argc, const char * argv[]) {
    // insert code here...
    int n;
    cin>>n;
    int* a = new int[n];
    if (a == NULL) exit(1);
    for (int i = 0; i < n; i++){
        cin>>a[i];
    }
    cout << "printing array before modification\n";
    for (int i = 0; i < n; i++){
        cout<<a[i]<<endl;
    }
    cout<<"\n";
    cout<<"printing array post modification \n";
    subtract_max(a, n);
    //print modified arr
    for (int i = 0; i < n; i++){
        cout<<a[i]<<endl;
    }
    cout<<"\n";
    deallocate(a);
    
    return 0;
}

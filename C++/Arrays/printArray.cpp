#include <iostream>
using namespace std;
void printArray(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
}
int main() {
 int arr[8] = {2,9,5,6,3,3,5,9};
 int size = sizeof(arr)/sizeof(arr[0]);

 
 cout<<"Printed Array : ";
 printArray(arr, size);
 
    return 0;
}
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void reverse(int arr[], int n ) {
    int start = 0;
    int end = n-1;
    while(start < end) {
        //swap(arr[start],arr[end]);
        //or
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;

        
    }
}
void printReverseArray(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
}
int main() {
int arr[6] = {1,2,3,4,5,6};
int n = 6;
reverse(arr,n);
printReverseArray(arr,n);

    return 0;
}
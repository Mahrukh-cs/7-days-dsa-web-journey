#include <iostream>
using namespace std;
void reverseArray(int arr[], int n) {
    int start = 0;
    int end = n-1;
    while(start < end) {
        if(end %2 != 0) {
            end--;
        }
        else if (start % 2 != 0) {
            start++;
        }
        else if(start % 2 == 0 && end % 2 == 0) {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }
}
void printArray(int arr[], int n){
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
}
int main(){
   int arr[6] = {10, 20, 30, 40, 50, 60};
   int n = 6;
   reverseArray(arr, n);
   printArray(arr, n);
   
    return 0;
}

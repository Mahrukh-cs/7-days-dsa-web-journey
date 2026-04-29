#include<iostream>
using namespace std;
void bubbleSort(int arr[], int n) {
    int flag;
    for(int i=0; i<n-1; i++) {   //repeat no of passes
        flag = 0;
        for(int j=0; j<n-1-i; j++) {   //no of comparsions for 1 pass
            if(arr[j]<arr[j+1]) {
                swap(arr[j], arr[j+1]);
                flag = 1;
            }
        }
    }
    if(flag == 0) {
        cout<<"Array is already sorted in descending : ";
        return;
    }
}
int main() {
    // int arr[] = {2,3,5,6,7};
int arr[] = {8,5,4,3,2};
int n = 5;
bubbleSort(arr, n);

for(int i=0; i<n; i++) {
    cout<<arr[i]<<" ";
}

    return 0;
}
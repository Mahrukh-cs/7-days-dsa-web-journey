#include<iostream>
using namespace std;
int removeDuplicates(int arr[], int n) {
    int i = 0;
    for(int j=0; j<n; j++) {
        if(arr[i] != arr[j]) {
            i++;                    //increment i
            arr[i] = arr[j];        //copy j to i
        }
    }
    return i+1;      //return length
}
int main() {
    int arr[] = {1,1,2,2,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int length = removeDuplicates(arr, n);
    cout<<"New Length : "<<length<<endl;
    cout<<"Array "<<length<<" elements : ";
    for(int k=0; k<length; k++) {
        cout<<arr[k]<<" ";
    }

    return 0;
}
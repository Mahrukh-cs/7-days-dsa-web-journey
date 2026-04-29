#include<iostream>
#include<climits>
using namespace std;
int linearSearch(int arr[], int n) {
    int target = 8;
    int count = 0;
    for(int i=0; i<n; i++) {
        if(arr[i] == target) {
            cout<<"Found at index "<<i<<endl;
            count++;
        }
    }
    cout<<"Count value is "<<count;    
    return count;
}
int main() {
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int arr[n];
    
    cout<<"Enter values of array "<<endl;
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    cout<<"Array values : ";
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    linearSearch(arr, n);
    return 0;
}
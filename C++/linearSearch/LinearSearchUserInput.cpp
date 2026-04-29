#include<iostream>
#include<climits>
using namespace std;
void linearSearch(int arr[], int n) {
    bool found = false;
    int target = 8;
    for(int i=0; i<n; i++) {
        if(arr[i] == target) {
            cout<<"Found at index "<<i<<endl;
            found = true;
            break;   // find first occurences
        }
    }
    if(!found) {
        cout<<"Not Found";
    }
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
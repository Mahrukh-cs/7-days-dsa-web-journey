#include<iostream>
using namespace std;
int main() {
    int arr[5];
    int n = 5;
    int target;
    cout<<"Enter target value : ";
    cin>>target;
    cout<<"Enter array values in a sorted order "<<endl;
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    int start = 0;
    int end = n-1;
    int firstOccurence = -1;
    while(start<=end) {
        int mid = start + (end - start)/2;
        if(arr[mid] == target) {
            firstOccurence = mid;
            end = mid - 1;     

        }
    else if(arr[mid] < target) {
        start = mid + 1;
    }
    else {
        end = mid - 1;
    }
    } 
    
    if(firstOccurence != -1) {
        cout<<"Target "<<target<<" last occurrence found at index "<<firstOccurence;
    }
    else {
        cout<<"Target "<<target<<" not found";
    }
    return 0;
}
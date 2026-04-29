#include<iostream>
using namespace std;
int main() {
    int arr[6];
    int n = 6;
    int target;
    cout<<"Enter a target value : ";
    cin>>target;
    cout<<"Enter sorted array values : ";
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"Sorted Array : ";
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    // to check if array is empty
    if(n == 0) {
    cout<<"Array is empty";
    return 0;
}
    int start = 0; int end = n-1;
    int count = 0; int firstOccurence = -1;
    while (start<=end)
    {
       int mid = start + (end - start)/2;
       if(arr[mid] == target) {
        firstOccurence = mid;
        end = mid - 1;
       }
       else if (arr[mid] < target) {
        start = mid + 1;
       }
       else
       {
        end = mid - 1;
       }
    }
    start = 0; //resets start and end for last occurence search 
    end = n-1;
    int lastOccurence = -1;
    while(start<=end) {
        int mid = start + (end - start) / 2;
        if(arr[mid] == target) {
            lastOccurence = mid;
            start = mid + 1;
        }
        else if(arr[mid] < target) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    if(firstOccurence != -1 && lastOccurence != -1) {
     int count = lastOccurence - firstOccurence + 1;
     cout<<target<<" repeats "<<count<<" times";
    }
    else {
        cout<<"Not Found";
    }
    

    return 0;
}
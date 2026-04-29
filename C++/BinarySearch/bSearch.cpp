#include <iostream>
using namespace std;

int main() 
{
  int arr[6];
  int n = sizeof(arr)/sizeof(arr[0]);
  int target;
  cout<<"Enter a target value : ";
  cin>>target;
  cout<<"Enter array in sorted form"<<endl;
  for(int i=0; i<n; i++) {
    cin>>arr[i];
  }
  cout<<"Sorted Array : ";
  for(int i=0; i<n; i++) {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  int start = 0; 
  int end = n - 1;
  while(start<=end) {
    int  mid = start + (end - start) / 2;
      if(arr[mid] == target) {
          cout<<"Target "<<target<<" Found at index "<<mid;
          return 0;
      } 
      else if(arr[mid] < target) {
          start = mid + 1;
      }
      else {
          end = mid - 1;
      }
  }
  cout<<"Not found";
    return 0;
}
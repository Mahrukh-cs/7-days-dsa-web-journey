#include <iostream>
using namespace std;

int main() {
    
  int arr[5] = {10,20,30,40,50};
  int n = 5;
  
  int start = 0;
  int end = 5-1;
  
  while(start<end) {
      int temp = arr[start];
      arr[start] = arr[end];
      arr[end] = temp;
      
      start++;
      end--;
  }
  
  //print reverse array
  for(int i=0; i<5; i++) {
      cout<<arr[i]<<" ";
  }
    return 0;
}
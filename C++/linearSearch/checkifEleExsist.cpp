#include <iostream>
using namespace std;

bool linearSearch(int arr[], int n, int target) {
    for(int i=0; i<n; i++) {
    if(arr[i] == target) {
        return true;
        break;
    } 
  } 
  return false;
}

int main() {
   int arr[]  = {10,20,30,40,50};
   int n = 5;
   int target = 30;
   bool result = linearSearch(arr, n, target);
   if(result !=false) {
       cout<<"Found";
   }
   else {
       cout<<"Not Found";
   }
    return 0;
}
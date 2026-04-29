// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
int arr[6] = {1,2,3,4,5,6};
int n = 6;
int start = 0;
int end = (n/2)-1;

while(start<end) {
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
}

for(int i=0; i<n; i++) {
    cout<<arr[i]<<" ";
}
    return 0;
}

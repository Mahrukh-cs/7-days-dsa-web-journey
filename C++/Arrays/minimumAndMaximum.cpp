#include <iostream>
#include<climits>
using namespace std;
int findMin(int arr[], int n) {
    int min = INT_MAX;
    for(int i=0; i<n; i++) {
        if(arr[i]<min) {
            min = arr[i];
        }
    }
    return min;
}
int findMax(int arr[], int n) {
    int max = INT_MIN;
    for(int i=0; i<n; i++) {
        if(arr[i]>max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
int arr[6] = {3,5,0,2,-333,1000};
int size = sizeof(arr)/sizeof(arr[0]);
int max = findMax(arr, size);
int min = findMin(arr, size);

cout<<"Maximum = "<<max<<endl;
cout<<"Minimum = "<<min<<endl;

    return 0;
}
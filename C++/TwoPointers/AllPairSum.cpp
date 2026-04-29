#include<iostream>
using namespace std;

void checkPairSum(int arr[], int n, int target) {
    int start = 0; 
    int end = n-1;
    while(start < end) {
        int sum = arr[start] + arr[end];
        if(sum == target) {
            cout << "Found Pair" << endl;
            cout << "Sum Pair(" << start << "," << end << ")" << endl;  // Added endl here
            start++;
            end--;
        }
        else if(sum < target) {
            start++;
        }
        else {
            end--;
        }
    }
}

int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target = 8;
    checkPairSum(arr, size, target);
    return 0;
}
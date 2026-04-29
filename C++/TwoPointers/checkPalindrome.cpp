#include<iostream>
using namespace std;
void checkPalindrome(int arr[], int n) {
    int start = 0;
    int end = n-1;
    while (start<end)
    {
        if(arr[start] != arr[end]) {
            cout<<"Not Palindrome";
            return;
        }
            start++;
            end--;
    }
    cout<<"Palindrome";
}
int main() {
    int arr[] = {0,1,3,2,1,0};
    int n = 6;
    checkPalindrome(arr, n);

    return 0;
}
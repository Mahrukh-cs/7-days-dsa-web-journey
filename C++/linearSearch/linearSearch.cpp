#include<iostream>
using namespace std;
int linearSearch(int arr[], int n, int target) {
    for(int i=0; i<n; i++) {
        if(arr[i] == target) {
            return i;
        }
    }
    return -1;
}
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
    int target = 30;
    int result = linearSearch(arr, n, target);
    if(result != -1) {
        cout<<"Found at index: "<<result;
    }
    else {
        cout<<"Not Found";
    }
}


//other way
// #include<iostream>
// using namespace std;
// int main() {
//     int arr[] = {10,20,30,40,50,30};
//     int n = 6;
//     int target = 30;
//     bool found = false;
//     for(int i=0; i<n; i++) {
//         if(arr[i] == target) {
//             cout<<"Found at index "<<i<<endl;
//             found = true;
//             break;    //for just one element else comment out if want to find number of occurences
//         }
//     }
//     if(!found) {
//         cout<<"Not Found";
//     }
    
//     return 0;
// }
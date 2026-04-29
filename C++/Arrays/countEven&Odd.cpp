#include <iostream>
using namespace std;
int main() {
    int arr[9] = {1,2,3,4,5,6,7,8,9};
    int countOdd = 0;
    int countEven = 0;
    for(int i=0; i<9; i++) {
        if(arr[i]%2 != 0) {
            countOdd++;
        }
        else {
            countEven++;
        }
    }
    cout<<"Odd Number = "<<countOdd;
    cout<<endl;
    cout<<"Even Number = "<<countEven;
    return 0;
}
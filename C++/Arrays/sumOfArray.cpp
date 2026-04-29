#include <iostream>
using namespace std;
int main() {
 int arr[8] = {2,9,5,6,3,3,5,9};
 int sum = 0;
 for(int i=0; i<8; i++) {
     sum += arr[i];
 }
 cout<<"Sum = "<<sum;
 
    return 0;
}
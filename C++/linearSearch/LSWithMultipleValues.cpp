#include <iostream>
using namespace std;

void linearSearch(int arr[], int n, int key[], int tSize) {
    for(int j = 0; j < tSize; j++) {        
        bool found = false;  // Declare inside the loop
        for(int i = 0; i < n; i++) {
            if(arr[i] == key[j]) {
                cout << key[j] << " Found at index " << i << endl;
                found = true;
                break;
            }
        }
        if(!found) {
            cout << key[j] << " Not Found" << endl;
        }
    }
}

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int n = 5;
    int key[] = {20, 30, 99, 50};  // 99 doesn't exist
    int keySize = 4;
    
    linearSearch(arr, n, key, keySize);
    
    return 0;
}
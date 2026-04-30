#include<iostream>
#include<string>
using namespace std;
int main() {

    string name;
    cout<<"Enter a string : ";
    cin>>name;
    cout<<endl;
    cout<<"Given String : "<<name<<endl;
    cout<<endl;
    int start = 0;
    int end = name.length()-1;
    bool isPalindrome = true;
    while(start < end) {
        if(name[start] != name[end]) {
            isPalindrome = false;
            break;
        }
        start++;
        end--;
    }
    
    if(isPalindrome) {
        cout<<"Yes, given string is Palindrome";
    }
    else {
        cout<<"Not Palindrome";
    }


    return 0;
}
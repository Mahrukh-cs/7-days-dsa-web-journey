#include<iostream>
#include<string>
using namespace std;
int main() {

    string name;
    cout<<"Enter a string : ";
    // cin>>name;  // Reads part before space
    getline(cin, name);   // Reads entire line including spaces
    cout<<endl;
    cout<<"String value : "<<name<<endl;

    int start = 0;
    int end = name.length()-1;

    while(start < end) {
        swap(name[start], name[end]);
        start++;
        end--;
    }

    cout<<"Reversed String : "<<name;


    return 0;
}
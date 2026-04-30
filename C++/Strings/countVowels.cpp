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
    int size = name.length();
    int count = 0;
    
    for(int i=0; i<size; i++) {
        if( name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u' || name[i] == 'A' || name[i] == 'E' || name[i] == 'I' || name[i] == 'O' || name[i] == 'U')  count++;
    }    
        cout<<"Number of vowels in string : "<<count;

    return 0;
}
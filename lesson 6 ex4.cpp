#include <iostream>
#include <string>

using namespace std;

int main()

{
    string word;
    cout<< "Please enter a word ";
    cin>>word;

    int Size;
    Size = word.length();

    cout<<word.substr(Size-1);




}

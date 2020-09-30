#include <iostream>
#include <string>

using namespace std;

int main()

{
    string word;

    cout<< "Please enter a word ";
    cin>>word;
    cout<<"The amount of letters is:
    cout<< word.length();
    cout<<"  "<<endl;

    cout<< "The first three letters are:";
    cout<<word.substr(0,3);


}

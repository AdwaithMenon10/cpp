#include <iostream>
#include <string>

using namespace std;

int main()

{
    string word;
    cout<< "Please enter a word ";
    cin>>word;

    string answer;
    answer = word.substr(1);

    if(answer == "a")
    {
        cout<<"Well done, the word begins with an a";
    }


    }

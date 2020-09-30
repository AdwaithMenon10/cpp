#include <iostream>
using namespace std;

int main()

{
  int number;
  cout<<"Please enter a number";
  cin>>number;

  int right_answer;
  right_answer = 0;

  for(int i = 1; i<=12; i++)
  {
    int answer;
    cout<< i <<" X "<< number<<"="<<endl;
    cin>>answer;
    int real_answer;
    real_answer = i * number;

    if (real_answer == answer)
    {
        cout<<"correct"<<endl;
        right_answer = right_answer + 1;
    }

    else
    {
        cout<<"Wrong"<<endl;
    }
  }

  cout<<"YOU GOT "<<right_answer<<"/16";




}

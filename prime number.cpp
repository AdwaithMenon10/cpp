# include <iostream>
using namespace std;

int main()

{
    bool isPrime;

    for (int n = 2; n < 100; n ++)
    {
        isPrime = true;

        for (int i = 2; i< n/2; i++)
        {
            if (n % i == 0)
            {
                isPrime = false;
                break;
            }


        }

        if (isPrime)
        {
            cout<<n<<endl;
        }



    }

}


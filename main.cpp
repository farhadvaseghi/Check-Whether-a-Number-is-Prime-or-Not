#include <iostream>
#include <cmath>
// Check Whether a Number is Prime or Not
using namespace std;
bool IsPrime(int);
int main()
{
    int num;
    cout<<"Please enter you'r number: ";
    cin>>num;
    if (num==1)
        cout<<"your number is prime";
    if (IsPrime(num))
    {
        cout<<"your number is prime";
    }
    else
    {
        cout<<"your number is not prime";
    }
    
    return 0;
}
bool IsPrime(int n)
{   
    bool prime=true;

    for (size_t i=2; i<=floor(sqrt(n)); i++)
    {
        if (n%i==0)
        {
            prime = false;
            break;
        }
        else 
        {
            continue;
        }
    }
    return prime;
}
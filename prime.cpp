#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"enter a number:";
    cin>>a;
    for(b=2;b<a;b++)
    {
        if(a % b == 0)
        break;
    }

    if(b == a)
    {
        cout<<"given number is prime number"<<endl;
    }
    else
    {
        cout<<"givn number is not prime number"<<endl;
    }
    
}

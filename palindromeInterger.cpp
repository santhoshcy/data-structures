#include<iostream>
using namespace std;

int main()
{
    int a,c=0,b;
    cout<<"enter a number:";
    cin>>a;
    b=a;
    while(a!=0)
    {   
        c = c*10+a%10;
        a=a/10;
    }
    if(c == b)
    cout<<"given integer is palindrome:"<<c<<endl;
    else
    {
        cout<<"given integer is not a palindrome"<<b<<endl;
    }
    
}

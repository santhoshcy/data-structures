#include<iostream>
using namespace std;

int main()
{
    int a,c=0;
    cout<<"enter a number to reverse:";
    cin>>a;
    while(a!=0)
    {   
        c = c*10+a%10;
        a=a/10;
    }
    cout<<"reversed number is:"<<c<<endl;
}

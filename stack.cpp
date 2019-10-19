#include<iostream>
using namespace std;
#define MAX 100

class stack
{
    int a[MAX];
    int top;
    public:
    stack()
    {
        top=-1;
    }

    void push(int element)
    {
        if(top > (MAX-1))
            cout<<"stack overflow"<<endl;
        else
        {
            a[++top]=element;
            cout<<element<<" added succsefull"<<endl;
        }
        
    }

    int pop()
    {
        if(top < 0)
            cout<<"stack underflow"<<endl;
        else
        {
            int element = a[top--];
            cout<<"poped element is "<<element<<endl;
            return element;
        }
    }

    void display()
    {
        if(top < 0)
        cout<<"empty stack! nothing to display.."<<endl;
        else
        {
            cout<<"stack elements are.."<<endl;
            for(int i=0;i<=top;i++)
            {   
                cout<<a[i]<<"\n";
            }
        }
        
    }

};


int main()
{
    int o;
    stack s;
    while(1)
    {
        cout<<"enter options.."<<endl;
        cout<<"1.Push\n2.Pop\n3.display"<<endl;
        cin>>o;
        switch(o)
        {
            case 1:
                cout<<"enter element to add:";
                int element;
                cin>>element;
                s.push(element);
                break;
            case 2:
                s.pop();
                break;
            case 3:
                s.display();
                break;
            default:
                cout<<"enter correct option";
        }

    }
}

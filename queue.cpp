#include<iostream>
using namespace std;
#define MAX 100

class queue
{
    int q[MAX],front,rear;
    public:
    queue()
    {
        front=-1;
        rear=-1;
    }
    void enqueue(int element)
    {
        if(rear == MAX-1)
        cout<<"queue overflow"<<endl;
        else
        {
            if(front == -1)
            front=0;
            rear++;
            q[rear]=element;
            cout<<"element added to queue:"<<element<<endl;
        }
        
    }

    int dequeue()
    {
        if(front == -1 || front>rear)
        {
        cout<<"queue uderflow"<<endl;
        return 0;
        }
        else
        {
            int element=q[front];
            front++;
            return element;
        }
        
    }

    void display()
    {
        if(front == -1)
            cout<<"\n nothing to display! queue is empty"<<endl;
        else
        {
        cout<<"queue contents are"<<endl;
        for(int i=front;i<=rear;i++)
        {

            cout<<q[i]<<"\n";
        }        }
    }
};


int main()
{
    queue q;
    int option;
    while(1)
    {
        cout<<"\nenter option to perform queue:\n";
        cout<<"1.Enqueue\n2.Dequeue\n3.Display"<<endl;
        cin>>option;
        
        switch(option)
        {
            case 1:
                int element;
                cout<<"enter a element to add:";
                cin>>element;
                q.enqueue(element);
                break;
            case 2:
                int ele;
                ele=q.dequeue();
                cout<<"deleted element from front end is:"<<ele<<endl;  
                break;
            case 3:
                q.display();
                break;
            default:
                cout<<"enter correct option\n try again!"<<endl;
        }
    }
}

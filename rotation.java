


class example
{
    void leftRotate(int arr[],int d,int n)
    {
        for(int i=0;i<d;i++)
        leftRotateByOne(arr,n);
    }

    void leftRotateByOne(int arr[], int n)
    {
        int i,temp;
        temp=arr[0];
        for(i=0;i<n-1;i++)
        {
            arr[i]=arr[i+1];
        }
        
        arr[i]=temp;

    }

    void display(int arr[],int n)
    {
        for(int i=0;i<n;i++)
        {
            System.out.println(arr[i]);
        }
    }
    public static void main(String args[])
    {
        example e=new example();
        int arr[]={1,2,3,4,5,6,7};
        e.leftRotate(arr, 2, 7);
        e.display(arr,7);

    }

}

class example
{
    Node head;
    static class Node{
        int data;
        Node next;
        Node(int d)
        {
            data=d;
            next=null;
        }
    }

    void printList()
    {
        Node n=head;
        while(n != null)
        {
            System.out.println(n.data);
            n=n.next;
        }
    }

    public static void main(String[] args)
    {
        example e = new example();
        e.head=new Node(1);
        Node second = new Node(2);
        Node third= new Node(3);

        e.head.next=second;
        second.next=third;
        e.printList();
    }


}

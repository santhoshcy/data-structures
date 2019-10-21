class LinkedList
{
    Node head;
    static class Node
    {
        int data;
        Node next;

        Node(int d)
        {
            data = d;
            next = null;
        }
    
    }

    public void printList()
    {
        Node n = head;
        while(n!= null)
        {
            System.out.println(n.data+" ");
            n=n.next;
        }
    }

    public void addInFirst(int new_Data)
    {
        Node new_Node = new Node(new_Data);
        new_Node.next=head;
        head=new_Node;
    }

    public void afterNode(Node prevNode,int new_Data)
    {
        if(prevNode == null)
        {
            System.out.println("previous node cannot be null\n");
            return;
        }

        Node new_node = new Node(new_Data);
        new_node.next=prevNode.next;
        prevNode.next=new_node;
    }
    
    public void addInLast(int new_Data)
    {
        Node new_Node=new Node(new_Data);
        if(head == null)
        {
            head=new_Node;
            return;
        }
        new_Node.next=null;

        Node last = head;
        while(last.next != null)
           last = last.next;
        last.next = new_Node;
    }


 public static void main(String[] args)
    {
    LinkedList llist = new LinkedList();
    llist.head = new Node(1);
    Node second = new Node(2);
    Node third = new Node(3);
    Node five = new Node(5);

    llist.head.next=second;
    second.next=third;
    third.next=five;

    llist.printList();
    llist.addInFirst(0);
    System.out.println("after inserting in first"+"\n");
    llist.printList();
    llist.afterNode(third,4);
    System.out.println("after inserting in middle:");
    llist.printList();
    llist.addInLast(6);
    System.out.println("after inserting in last:");
    llist.printList();
    }
}

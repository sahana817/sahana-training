 Node {
    int data;
    Node next;

    Node(int data){
        this.data = data;sahana817/sahana-training/day8
        this.next = null;
    }

}

class LinkedList {
    Node head;

    LinkedList(){
        this.head = null;
    }

    public void add(int data){
        Node newNode = new Node(data);
        if (head == null){
            head = newNode;
        } else {
            Node temp = head;
            while (temp.next != null){
                temp = temp.next;
            }
            temp.next = newNode;
        }
    }
}

public class Main {
    public static void main(String[] args) {
        LinkedList list = new LinkedList();
        list.add(17);
        list.add(20);
        list.add(25);
    }
}
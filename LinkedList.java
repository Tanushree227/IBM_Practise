class Node {
    int data;
    Node next;
    Node(int d) {
        data = d;
        next = null;
    }
}

public class LinkedList {
    Node head;

    public boolean hasCycle(Node head) {
        if (head == null || head.next == null) return false;

        Node slow = head, fast = head;
        while (fast != null && fast.next != null) {
            slow = slow.next;
            fast = fast.next.next;

            if (slow == fast) return true;
        }
        return false;
    }

    public static void main(String[] args) {
        LinkedList list = new LinkedList();
        list.head = new Node(1);
        list.head.next = new Node(2);
        list.head.next.next = new Node(3);
        list.head.next.next.next = list.head; // Creating a cycle

        System.out.println("Cycle Detected: " + list.hasCycle(list.head));
    }
}

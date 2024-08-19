class ListNode
{
    int val;
    ListNode next;
    ListNode(int x)
    {
        val = x;
    }
}

public class reverseList {
    public ListNode reverseList(ListNode head) {
        ListNode prev = null;
        ListNode current = head;
        while (current != null) {
            ListNode nextNode = current.next;
            current.next = prev;
            prev = current;
            current = nextNode;
        }
        return prev;
    }
}
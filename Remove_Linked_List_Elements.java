/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode removeElements(ListNode head, int val) {
        ListNode dummy = new ListNode();
        dummy.next = head;
        ListNode fast = head;
        ListNode slow = dummy;
        
        while(fast!=null && slow!=null && slow.next!=null){
            ListNode temp = slow;
            if(fast.val == val){
                fast = fast.next;
                slow.next = slow.next.next;
                slow = temp;
            }else{
                slow = slow.next;
                fast = fast.next;
            }
        }
        return dummy.next;
    }
}

class Solution:
    def oddEvenList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if not head or not head.next or not head.next.next:
            return head
        odd, cur  = head, head.next.next
        even = evenhead = head.next
        i = 3
        
        while cur:
            if i%2!=0:
                odd.next = cur
                odd = odd.next
            elif i%2==0:
                even.next = cur
                even = even.next
            cur = cur.next
            i+=1
        even.next = None
        odd.next = evenhead
        return head

        

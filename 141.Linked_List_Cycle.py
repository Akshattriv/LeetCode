class Solution:
    def hasCycle(self, head: Optional[ListNode]) -> bool:
        a,b = head,head
        while(b and b.next): #Since b would reach the end of the list before a.
            a = a.next
            b = b.next.next
            if(a == b):
                return True
        return False

class Solution:
    def detectCycle(self, head: Optional[ListNode]) -> Optional[ListNode]:
        a,b = head,head
        isCycle = False
        while(b and b.next):
            a = a.next
            b = b.next.next
            if (a == b):
                isCycle=True
                break
        if(isCycle):
            s = head
            while(a != s):
                a = a.next
                s = s.next
            return a
        return None

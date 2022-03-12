class Solution:
    def splitListToParts(self, head: Optional[ListNode], k: int) -> List[Optional[ListNode]]:
        arr = []
        cur, n = head, 0
        prev = None
        
        while cur:
            n += 1
            cur = cur.next
        cur = head        
        part = n // k
        extra = n % k
        
        for _ in range(k):
            arr.append(cur)
            for _ in range(part):
                prev = cur
                cur = cur.next
            if extra and cur:
                extra -= 1
                prev = cur
                cur = cur.next
            if prev:
                prev.next = None
        return arr

class Solution:
    def rotateRight(self, head: Optional[ListNode], k: int) -> Optional[ListNode]:
        if head == None:
            return head
        
        tail, cur = head, head
        length = 0
        p = head
        
        while(tail.next): #finding length of linked list
            tail = tail.next
            length += 1
        
        k = k % (length+1)
        if k == 0:
            return head
        
        cut = length - k 
        for i in range(cut): # taking cur pointer to place to cut
            cur = cur.next
            p = p.next
        
        p = p.next
        cur.next = None
        tail.next = head
        
        return p

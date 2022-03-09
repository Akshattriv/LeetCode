class Solution:
    def isHappy(self, n: int) -> bool:
        h = {}
        while(n != 1):
            digits = [int(i) for i in str(n)]
            n = 0
            for i in digits:
                n += i*i
            if n not in h:
                h[n] = 1
            else:
                return False
        return True

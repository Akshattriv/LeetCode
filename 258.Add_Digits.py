class Solution:
    def addDigits(self, num: int) -> int:
        while(len(str(num))!=1):
            digits = [int(i) for i in str(num)]    
            num = sum(digits)
        return num

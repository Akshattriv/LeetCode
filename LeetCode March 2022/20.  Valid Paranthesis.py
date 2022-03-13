class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        valid = {')':'(' ,']':'[', '}':'{'}
        
        for val in s:
            if val not in valid:
                stack.append(val)
            else:
                if stack and stack[-1] == valid[val]:
                    stack.pop()
                else:
                    return False
        if stack:
            return False
        else:
            return True

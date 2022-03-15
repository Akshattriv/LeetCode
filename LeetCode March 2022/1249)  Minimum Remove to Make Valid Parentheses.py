class Solution:
    def minRemoveToMakeValid(self, s: str) -> str:
        stack = []
        n = len(s)
        a = list(s)
        
        for i in range(n):
            if a[i] == "(":
                stack.append(i)
            elif a[i] == ")":
                if stack:
                    stack.pop()
                else:
                    a[i] = ""
        for j in stack:
            a[j]= ""
        return "".join(a)
    

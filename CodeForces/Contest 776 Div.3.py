n = int(input())
for i in range(n):
    s = input()
    s2 = input()
    flag = 0
    for i in range(len(s)):
        if s[i] == s2:
            a = i+1
            b = len(s)
            c = b-a 
            d = a-1
            if c%2 == 0 and d%2 == 0:
                flag = 1
                break
    if flag == 1:
        print("YES")
    else:
        print("NO")

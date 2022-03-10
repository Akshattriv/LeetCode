from math import floor
def fun(x,a):
    f = floor(x/a)+x%a
    return f

t = int(input())
query = [tuple(map(int,input().split())) for i in range(t)]
m = 0
h = {}
for i in range(t):
    l,r,a = query[i]
    h.clear()
    for j in range(l,r+1):
        b = fun(j,a)
        if b not in h:
            h[b] = 1
            if b>m:
                m = b
        else:
            break
        
    print(m)

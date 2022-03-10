t = int(input())
a = 10**9
for i in range(t):
    n = int(input())
    total_times = n-1
    if(3**total_times <= a):
        print("YES")
        b = 1
        for i in range(n):
            print(b)
            b = b*3
    else:
        print("NO")


T = int(input())
for i in range(T):
    index = 0
    N,X = map(int,input().split())
    A = [int(i) for i in input().split()]
    for i in range(len(A)):
        if X>A[i]:
            index = i+1
    print(index)
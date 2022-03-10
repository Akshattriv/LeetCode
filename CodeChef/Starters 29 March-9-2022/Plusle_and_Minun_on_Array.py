T = int(input())
for i in range(T):
    N = int(input())
    A = [abs(int(i)) for i in input().split()]
    even = [A[i] for i in range(0,len(A),2)]
    odd = [A[i] for i in range(1,len(A),2)]
    even.sort()
    odd.sort()
    if(even[0]<odd[-1]):
        temp = even[0]
        even[0] = odd[-1]
        odd[-1] = temp
    print(sum(even)-sum(odd))
    #Greedy approach
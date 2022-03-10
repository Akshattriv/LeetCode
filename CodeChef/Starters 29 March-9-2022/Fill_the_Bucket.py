T = int(input())
query = [tuple(map(int,input().split())) for i in range(T)]
for i in range(len(query)):
    K,X = query[i]
    print(K-X)

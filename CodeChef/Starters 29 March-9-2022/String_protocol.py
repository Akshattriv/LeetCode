T = int(input())
for i in range(T):
    N = int(input())
    S = input()

    index = [-2]
    for i in range(len(S)-1):
        if S[i] == S[i+1]:
            if index[-1]!=i-1:
                index.append(i)
    index = set(index)
    t = ''
    for i in range(len(S)):
        if i not in index:
            t += S[i]
    print(len(t))
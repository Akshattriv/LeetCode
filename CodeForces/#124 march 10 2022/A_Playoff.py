t = int(input())
for i in range(t):
    number = int(input())
    total = 2**number
    if number == 0:
        print(0)
    else:
        print(total - 1)
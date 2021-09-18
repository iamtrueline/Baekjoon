n = int(input())
for _ in range(n):
    string = str(input().rstrip())
    sumnum = 0
    add = 1
    for s in string:
        if s == 'O':
            sumnum += add
            add += 1
        else:
            add = 1;
    print(sumnum)

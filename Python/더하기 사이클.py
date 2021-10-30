ogn = int(input())
cycle = 0
tmp = ogn

while True:
    a = tmp//10
    b = tmp%10
    c = a + b
    chg = b*10 + c%10
    cycle += 1
    if ogn == chg:
        break
    else:
        tmp = chg
print(cycle)

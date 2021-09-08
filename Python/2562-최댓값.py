big = 0
idx = 0
for i in range(9):
    tmp = int(input())
    if tmp > big:
        big = tmp
        idx = i+1
print(big)
print(idx)

sum = 0
n = list(map(int, input().split()))
for i in n:
    sum += i*i
print(sum%10)

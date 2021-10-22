def ishan(n):
    if n < 100:
        return 1
    elif n == 1000:
        return 0
    else:
        temp1 = (n%100)//10 - n//100;
        temp2 = n%10 - (n%100)//10;
        if temp1 == temp2:
            return 1
        else:
            return 0

num = 0;
n = int(input())
for i in range(n):
    if ishan(i+1) == 1:
        num += 1
print(num);

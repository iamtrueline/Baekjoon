a=int(input())
b=int(input())
c=int(input())
i=str(a*b*c)

for n in range(10):
    print(i.count(str(n)))

def dn(i):
    res = i
    for n in list(str(i)):
        res += int(n)
    return res
    
d = []

for i in range(1, 10001):
    d.append(dn(i))
    
for i in range(1, 10001):
    if i not in d:
        print(i)

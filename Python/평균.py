n = int(input())
score = list(map(int, input().split()))
max = max(score)
all = 0

for s in score:
    all += s/max*100;

print(all/n)

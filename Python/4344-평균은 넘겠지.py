n = int(input())
for _ in range(n):
    score = list(map(int, input().split()))
    avg = sum(score[1:]) / score[0]
    sm = 0
    for i in score[1:]:
        if i > avg:
            sm += 1
    avg = sm/score[0]*100
    
    print('{:.3f}%'.format(avg))

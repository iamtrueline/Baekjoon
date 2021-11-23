n, m = map(int, input().split())
n_list= list(map(int, input().split()))

for i in range(len(n_list)):
    print(n_list[i] - n*m, end =" ")

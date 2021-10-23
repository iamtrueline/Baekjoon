arr = [-1 for _ in range(26)]
abc = 'abcdefghijklmnopqrstuvwxyz'

word = input()

for c in abc:
    if c in word:
        print(word.index(c), end = " ")
    else:
        print('-1', end = " ")

n,S= list(map(int, input().split(' ')))
answer = 0
for i in range(1, n + 1):
    answer += i
print(answer-S)
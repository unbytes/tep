memo = []
for i in range(1, 10000+1):
    memo.append(str(i))

n = int(input())
for i in range(n):
    vt = [0]*10
    for j in memo[:int(input())]:
        for k in range(10):
            vt[k] += j.count(str(k))
    print(*vt)

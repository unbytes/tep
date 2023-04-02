N, R = map(int, input().split())
gp = dict()
for n in range(N):
    gp[n + 1] = list()
for r in range(R):
    c, b = map(int, input().split())
    gp[c].append(b)
    gp[b].append(c)

count = 0
for node in gp:
    count += N - 1 - len(gp[node])
print(count//2)

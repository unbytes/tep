N = int(input())
u = set()
for n in range(N):
    age, tp = input().split()
    u.add((age, tp))
print(len(u))

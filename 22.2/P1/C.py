from heapq import heappop, heappush
N = int(input())
wines = list()
for n in range(N):
    req = input()
    if req == '?':
        if not len(wines):
            print(-1)
        else:
            print(heappop(wines))
    else:
        year = req.split()
        heappush(wines, int(year[-1]))

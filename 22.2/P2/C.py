class UFDS():
    def __init__(self, nodes):
        self.size = [0] + [1] * nodes
        self.ps = list(range(0, nodes + 1))

    def find_set(self, S):
        if self.ps[S] == S:
            return S
        self.ps[S] = self.find_set(self.ps[S])
        return self.ps[S]

    def same_set(self, S, B):
        return self.find_set(S) == self.find_set(B)

    def union_set(self, S, B):
        if self.same_set(S, B):
            return None

        pS = self.find_set(S)
        pB = self.find_set(B)

        if self.size[pS] < self.size[pB]:
            pS, pB = pB, pS

        self.ps[pB] = pS
        self.size[pS] += self.size[pB]


nodes, M = map(int, input().split())
C = int(input())
ufds = UFDS(nodes)
for time in range(C):
    c, b = map(int, input().split())
    ufds.union_set(c, b)

counter = dict()
for node in range(1, nodes + 1):
    top = ufds.find_set(node)
    if top not in counter:
        counter[top] = 1
    else:
        counter[top] += 1

gps, up = 0, -1
for gp in counter:
    if counter[gp] >= M:
        gps += 1

        if counter[gp] >= up:
            up = counter[gp]

if gps:
    print(gps, up)
else:
    print(0)

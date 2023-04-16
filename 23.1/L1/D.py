"""
Website: Codeforces
Link: https://codeforces.com/problemset/problem/276/D
"""
def solve(l, r):
    lb, rb = bin(l)[2:], bin(r)[2:]

    ln = max(len(lb), len(rb))
    lb, rb = lb.zfill(ln), rb.zfill(ln)

    for i in range(ln):
        if lb[i] != rb[i]:
            return (1 << (ln - i)) - 1
    return 0


print(solve(*map(int, input().split())))

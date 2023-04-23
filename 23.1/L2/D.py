buf = []
while True:
    try:
        n, k = map(int, input().split())
        ans = 0
        while n >= k:
            ans += (n // k)*k
            tmp = n - (n // k)*k
            n = tmp + (n // k)
        buf.append(ans + n)
    except EOFError:
        for b in buf:
            print(b)
        break

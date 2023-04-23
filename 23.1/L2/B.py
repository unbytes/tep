buf = []
while True:
    try:
        a, b = map(int, input().split())
        buf.append([])
        while a != 0 and b != 0:
            n = a // b
            buf[-1].append(n)
            n *= b
            a -= n
            a, b = b, a
        if not len(buf[-1]):
            buf[-1].append(0)
    except EOFError:
        for b in buf:
            if len(b) == 1:
                print(f"[{b[0]}]")
            else:
                print(f"[{b[0]};", end="")
                print(*b[1:], sep=",", end="")
                print("]")
        break

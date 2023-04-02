M, N = map(int, input().split())
arr = list(map(int, input().split()))

pre = [arr[0]]
for n in arr[1:]:
    pre.append(n + pre[-1])

if min(pre) >= 0:
    print(0)
elif min(pre) < 0 and M >= abs(min(pre)):
    print(abs(min(pre)))
else:
    print(-1)

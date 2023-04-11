"""
Website: AtCoder
Link: https://atcoder.jp/contests/abc097/tasks/abc097_a
"""
a, b, c, d = map(int, input().split())
ind = abs(b-a) <= d and abs(c-b) <= d
if abs(c-a) <= d or ind:
    print("Yes")
else:
    print("No")

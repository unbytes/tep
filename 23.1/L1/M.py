"""
Website: Codeforces
Link: https://codeforces.com/problemset/problem/1036/A
"""
n, m = map(int, input().split())
if (m % n):
    print(m//n + 1)
else:
    print(m//n)

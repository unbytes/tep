x = "PI"*10
A, B = map(int, input().split())
if (x[A + B - 1] == 'P'):
    print('Lucas')
else:
    print('Pedro')

from itertools import permutations
d = input().split("/")
d = "".join(d)
print(len(set(permutations(d))))

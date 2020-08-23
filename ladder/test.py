s = input().split("+")
s = [int(x) for x in s]
s.sort()
print("+".join([str(x) for x in s]))
readline = input().split()
integers = int(readline[0])
k = int(readline[1])
if k <= (integers / 2) + ( integers / 2 % 1):
    print(k * 2 - 1)
else:
    print((k- (integers / 2) + ( integers / 2 % 1)) * 2)

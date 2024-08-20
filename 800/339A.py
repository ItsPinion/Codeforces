readline = list(map(int, input().split("+")))
readline.sort()

print("+".join(map(str, readline)))

statements = int(input())
X = 0

for _ in range(statements):
    statement = input().replace("X", "")
    if statement[0] == "+":
        X += 1
    else:
        X -= 1

print(X)

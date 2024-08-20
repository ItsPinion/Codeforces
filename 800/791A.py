readline = input().split(" ")

a = int(readline[0])
b = int(readline[1])

x = 1

while True:
    a *= 3
    b *= 2

    if a > b:
        break
    x += 1

print(x)

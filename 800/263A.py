matrix = []

position = {
    'x': 0,
    'y': 0
}

for i in range(5):
    row = list(map(int, input().split()))
    
    for j in range(len(row)):
        if row[j] == 1:
            position['x'] = j
            position['y'] = i

    matrix.append(row)

up = abs(2 - position['y'])
right = abs(2 - position['x'])

print(up + right)

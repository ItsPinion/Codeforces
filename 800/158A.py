A = input().split(" ")

participants = int(A[0])
Kth = int(A[1])

places = input().split(" ")

min_value = int(places[Kth - 1])

count = 0

for i in range(participants):
    if int(places[i]) >= min_value and int(places[i]) > 0:
        count += 1

print(count)

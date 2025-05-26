n = int(input())
a = list(map(int, input().split()))
a.sort(reverse=True)
b = []

def sum_list(lst):
    return sum(lst)

while True:
    b.append(a.pop(0))
    if sum_list(b) > sum_list(a):
        break

print(len(b))

readline = input()

p = ""
for char in readline:
    if char not in p:
        p = p+char

print("CHAT WITH HER!") if (len(p) % 2 == 0) else print("IGNORE HIM!")

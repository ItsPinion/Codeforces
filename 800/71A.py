line = int(input())
lines = []
 
for i in range(line):
    lines.append(input())
    
for i in range(line):
    if len(lines[i]) <= 10:
        print(lines[i])
    else:
        print(lines[i][0]+ str(len(lines[i])-2) + lines[i][-1])

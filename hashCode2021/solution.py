import random
file_name = input("Enter file name : ")
file = open(file_name, "r")
count = True
count1 = 0
V = []
S = []
d = 0
s = 0

#Taking input
for lines in file:
    print(lines)
    if(count):
        d,i,s,v,f = lines.split(" ")
        count = False
    elif(count1<int(s)):
        S.append(lines)
    else:
        V.append(lines)
print(d,s,i,v,f)
print(V)
print(S)
#Functioning
paths = []
for path in S[int(s):-1]:
    p = path.split(" ")
    for i in range(2,len(p)):
        paths.append(p[i])

paths = set(paths)
paths = list(paths)
outputFile = input("Enter file name :")
f = open(outputFile, "w")
f.write(str(len(paths)-1)+"\n")
intervals = int(d)//len(paths)
j = 0
for l in range(len(paths)):
    f.write(str(random.randrange(0,len(paths)))+"\n")
    f.write(str(random.randrange(0,len(paths)))+"\n")
    f.write(paths[j])
    j = j+1
    f.write(str(intervals)+"\n")


        
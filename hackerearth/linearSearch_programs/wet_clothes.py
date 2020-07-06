# Write your code here
initials = list(map(int , input().rstrip().split(" ")))
n = list(map(int , input().rstrip().split(" ")))
m = list(map(int , input().rstrip().split(" ")))
dry_clothes = []

for time in range(1,len(n)):
    current_time = n[time] - n[time-1]
    cloth = 0
    while(cloth<len(m)):
        if(current_time >= m[cloth]):
            dry_clothes.append(m.pop(cloth))
        cloth += 1

print(len(dry_clothes))
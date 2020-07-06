def solution(rounds):
    chef = 0
    friend = 0
    for round in rounds:
        A = digitSum(round[0])
        B = digitSum(round[1])
        if(A>B):
            chef += 1
        elif(A==B):
            chef +=1
            friend += 1
        else:
            friend += 1
    
    if(chef>friend):
        return (0,chef)
    elif(chef==friend):
        return (2,chef)
    else:
        return (1,friend)
            

def digitSum(digit):
    if(digit<10):
        return digit
    else:
        a = digit
        while(a>=10):
            a = ((a%10) + (a//10))
        return a

t = int(input())

for __ in range(t):
    N = int(input())
    rounds = []
    for i in range(N):
        round = list(map(int , input().rstrip().split(" ")))
        rounds.append(round)
        print(rounds)
    
    winner , score = solution(rounds)
    print(winner , score)

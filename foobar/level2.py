def solution(s):
    north = ""
    south = ""
    salute = 0

    for i in s:
        if(i=="<"):
            if(len(south)==0):
                continue
            else:
                salute = salute + (len(south)*2)
        
        elif(i==">"):
            south = south + ">"
        else:
            continue
    return salute

b = solution("<<<<<<<<------->")
print(b)

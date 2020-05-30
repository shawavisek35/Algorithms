def minimumMoves(s, d):
    # Write your code here
    moves = 0
    l = list(s)
    #print(l)
    for i in range(len(l)-d+1):
        #print(l)
        intermediate = l[i:i+d]
        #print(intermediate)
        if("1" in intermediate):
            continue
        else:
            #print(intermediate)
            l[i+d-1] = "1"
            moves += 1
    return moves

s = input()
d = int(input())

print(minimumMoves(s,d))
"""
    @ Avisek Shaw
    "Every model is wrong but some are useful."
"""

def compareTriplet(player1,player2):

    player1_score = 0
    player2_score = 0

    for i in range(len(player1)):
        if(player1[i]>player2[i]):
            player1_score += 1
        elif(player1[i]<player2[i]):
            player2_score += 1
        else:
            continue
    return [player1_score,player2_score]

#driver code
a = [1,2,3]
b = [1,5,0]

result = compareTriplet(a,b)
print(result)
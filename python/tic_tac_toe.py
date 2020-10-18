"""
Tic tac toe game 
copyright @Avisek Shaw

"""

import time
import random

def row_check(chart,l):
    r = chart[0]
    c = chart[1]
    m = l[r][c]
    count = 0 
    for k in range(3):
        if(m==l[r][k]):
            count = count + 1
    if(count==3):
        return True
    else:
        return False


def col(chart,l):
    r = chart[0]
    c = chart[1]
    m = l[r][c]
    count = 0 
    for k in range(3):
        if(m==l[k][c]):
            count = count + 1
    if(count==3):
        return True
    else:
        return False


def diagonal_check(chart,l):
    r = chart[0]
    c = chart[1]
    m = l[r][c]
    count = 0 
    for k in range(3):
        if(m==l[k][k]):
            count = count + 1
    if(count==3):
        return True
    else:
        return False

def game():
    moves_chart = {
        0 : [0,0],
        1 : [0,1],
        2 : [0,2],
        3 : [1,0],
        4 : [1,1],
        5 : [1,2],
        6 : [2,0],
        7 : [2,1],
        8 : [2,2]
    }
    moves_remaining = [0,1,2,3,4,5,6,7,8]
    moves_completed = []
    
    l = [
        [" "," "," "],
        [" "," "," "],
        [" "," "," "]
    ]
    
    ch = input("Enter Your Weapon for tic tac toe : [X ,O] : ")

    if(ch == "X" or ch=="x"):
        comp = "O"

    else:
        comp = "X"


    while True:
        print("\n***********************Board********************\n")
        for i in range(3):
            for j in range(3):
                print(f"| {l[i][j]} |",end = "")
            print("\n----------------")

        print("\n")
        print('  '.join(str(e) for e in moves_remaining),"\n")
        move = int(input("Enter your choice : "))
        moves = moves_chart[move]
        r = moves[0]
        c = moves[1]
        l[r][c] = ch
        moves_completed.append(move)
        moves_remaining.remove(move)

        if(row_check(moves,l) or col(moves,l) or diagonal_check(moves,l)):
            print("You are the Winner of the game .")
            print("\n***********************Board********************\n")
            for i in range(3):
                for j in range(3):
                    print(f"| {l[i][j]} |",end = "")
                print("\n----------------")

            print("\n")
            break

        print("\n***********************Board********************\n")
        for i in range(3):
            for j in range(3):
                print(f"| {l[i][j]} |",end = "")
            print("\n----------------")

        print("\n")

        if(len(moves_remaining)==0):
            print("Game Over match draw")
            break

        print("Computers Turn : ")

        time.sleep(4)

        move = random.choice(moves_remaining)
        moves = moves_chart[move]
        r = moves[0]
        c = moves[1]
        l[r][c] = comp
        moves_completed.append(move)
        moves_remaining.remove(move)

        if(row_check(moves,l) or col(moves,l) or diagonal_check(moves,l)):
            print("You are the Looser of the game .")
            print("\n***********************Board********************\n")
            for i in range(3):
                for j in range(3):
                    print(f"| {l[i][j]} |",end = "")
                print("\n----------------")
            print("\n")
            break

        print("\n***********************Board********************\n")
        for i in range(3):
            for j in range(3):
                print(f"| {l[i][j]} |",end = "")
            print("\n----------------")

        print("\n")

        if(len(moves_remaining)==0):
            print("Game Over match draw")
            break

        else:
            continue
game()
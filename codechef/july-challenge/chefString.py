def solution(keyboard_strings):
    passes = []
    for s in range(len(keyboard_strings)-1):
        diff = abs(keyboard_strings[s+1]-keyboard_strings[s])
        passes.append(diff-1)
    return sum(passes)


t = int(input())

for __ in range(t):
    N = int(input())
    a = input().rstrip().split(" ")
    keyboard = [int(i) for i in a]  #list comprehension

    """
        Another way
        keyboard = list(map(int , input().rstrip().split(" ")))
    """
    print(solution(keyboard))
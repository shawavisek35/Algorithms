def expand(pairs_of_string):
    actual_string = ""
    for string in pairs_of_string:
        actual_string += string[0]*int(string[1])
    return actual_string

def isPalindrome(string):
    revString = string[::-1]
    if(revString==string):
        return True
    else:
        return False


def solve():
    n = int(input())
    pairs_of_strings = []
    no_of_palindrome = 0
    for i in range(n):
        pairs = input().rstrip().split(" ")
        pairs_of_strings.append(pairs)
    
    actual_string = expand(pairs_of_strings)
    for i in range(len(actual_string)):
        j = len(actual_string)
        while(j>i):
            if(isPalindrome(actual_string[i:j])):
                print("yes")
                no_of_palindrome += 1
            j -=1
    
    return no_of_palindrome

#driver code
t = int(input())
for __ in range(t):
    print(solve())
            
    





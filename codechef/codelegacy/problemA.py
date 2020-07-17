t = int(input())

def solve():
    n = int(input())
    result = "YES"
    numbers = list(map(int , input().split()))
    for number in numbers:
        if(number%2==0 and (number==1)):
            continue
        else:
            i = 0
            while(i<n):
                if(numbers[i]%number!=0):
                    result = "NO"
                i += 1
    print(result)

for __ in range(t):
    solve()
def sumofdigits(n):
    n = str(n)
    sum = 0
    for i in range(len(n)):
        sum+=int(n[i])


    


    return sum


def solve(n):
    count = 0
    while n>=10:
        n = sumofdigits(n)

        count+=1


    return count


n=int(input())
print(solve(n))

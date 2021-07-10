import math
def excitement(a,b):

    if a==b:
        print(0,0)
        return
    elif a>b:
        if (a-b)==math.gcd(a,b):
            print(a-b,0)
            return


        else:
            moves = min(a-b - (a%(a-b)),min(a,b),a%
            (abs(a-b)))
            print(a-b,moves)
            return

    else:
        if (b-a)==math.gcd(a,b):
            print(b-a,0)
            return
        else:
            moves = min(b-a-(b%(b-a)),min(a,b),a%(abs(a-b)))
            print(b-a,moves)
            return


for _ in range(int(input())):

    a,b = map(int,input().split())
    excitement(a,b)








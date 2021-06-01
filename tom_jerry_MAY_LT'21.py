def train(a,b,c,d,k):
    path=0
    path+=abs(a-c)
    path+=abs(b-d)

    if path%2==0 and k%2==0  and k>=path:
        return "YES"

    elif path%2!=0 and k%2!=0 and k>=path:
        return "YES"


    return "NO"



for _ in range(int(input())):
    a,b,c,d,k=map(int,input().split())
    print(train(a,b,c,d,k))
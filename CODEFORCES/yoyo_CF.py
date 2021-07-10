def yoyo(n,m,i,j):
    c1 = i-1 + j-1
    c2 = abs(i-n) + abs(j-1)
    c3 = abs(i-1) + abs(j-m)
    c4 = abs(i-n) + abs(j-m)


    if c1>=c2 and c1>=c3 and c1>=c4:
        print(1,1,n,m)
        return

    elif c2>=c1 and c2>=c3 and c2>=c4:
        print(1,m,n,1)
        return

    elif c3>=c1 and c3>=c2 and c3>=c4:
        print(1,m,n,1)
        return

    elif c4>=c1 and c4>=c2 and c4>=c3:
        print(n,m,1,1)
        return


for _ in range(int(input())):
    n,m,i,j = map(int,input().split())
    yoyo(n,m,i,j)




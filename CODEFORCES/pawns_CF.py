def pawns(n,arr):
    ans = 0
    if arr[1][0]=="1":
        if arr[0][0]=="0":
            ans+=1
            arr[0][0]=None

        elif arr[0][1]=="1":
            ans+=1
            arr[0][1] = None


    if arr[1][n-1] =="1":
        if arr[0][n-1]!=None and arr[0][n-1]=="0":
            ans+=1
            arr[0][n-1]=None

        elif arr[0][n-2]!=None and arr[0][n-2]=="1":
            ans+=1
            arr[0][n-2] = None


    for i in range(1,n-1):
        # print(i)
        if arr[1][i]=="1" and arr[0][i]=="0" and arr[0][i]!=None:
            ans+=1
            arr[0][i] = None

        elif arr[1][i]=="1" and arr[0][i-1]=="1" and arr[0][i-1]!=None:
            ans+=1
            arr[0][i-1]=None

        elif arr[1][i]=="1" and arr[0][i+1]=="1" and arr[0][i+1]!=None:
            ans+=1
            arr[0][i+1] = None


    print(ans)
    return


for _ in range(int(input())):
    n = int(input())
    arr= []
    x  = input()
    x= list(x)
    arr.append(x)
    y= input()
    y = list(y)
    arr.append(y)
    pawns(n,arr)

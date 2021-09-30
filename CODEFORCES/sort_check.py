def solve(n,arr):
    # n = len(arr)
    finalarray= []
    ans = []
    op = 0


    # print(sorted_array,arr)
    i=0
    while i<n:
        # print(i,n)
        if i==n-1:
            y = arr[n-1]
            x = min(y,10000000000)
        else:
            x = min(arr[i:n])
        
        # print(x,"hello")
        for j in range(i,n):
            if  arr[j] == x:
                if (j-i)!=0:
                    ans.append([i+1,j+1,j-i])
                    op+=1
                    finalarray.append(x)
                    arr = finalarray +arr[i:j]+arr[j+1:n]
                else:
                    finalarray.append(x)
                    arr = finalarray +arr[j+1:n]
                # print(arr)
                i+=1
                break


    print(op)
    for i in range(op):
        print(*ans[i])
                


for _ in range(int(input())):
    n = int(input())
    arr=[int(arr) for arr in input().split()]
    # print(arr)
    solve(n,arr)



def solve(n,arr):
    ans = arr[0]
    ans = str(ans)
    for i in range(1,n):
        last = ans[len(ans)-1]
        first = ans[0]
        
        if arr[i]<int(last) and arr[i]<int(first):
            ans = str(arr[i]) + ans
        else:
            ans = ans+str(arr[i])

        # print(ans)

    for i in range(n):
        print(ans[i],end=" ")

    print()



for _ in range(int(input())):
    n = int(input())
    arr= [ int(arr) for arr in input().split()]
    solve(n,arr)

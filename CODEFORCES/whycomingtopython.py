def solve(n,s,k):
    arr = []
    
    for i in range(len(s)):
        if s[i]=="*":
            arr.append(i)

    ans = min(len(arr),2)

    if ans==1:
        return ans


    i=0
    j=1
    while i<len(arr):
        while j<len(arr):
            if arr[j]-arr[i]<=k:
                if j==len(arr)-1:
                    return ans
                j+=1

            else:
                ans+=1
                i=j-1
                break

    return ans



for i in range(int(input())):
    n,k = map(int,input().split())
    s = input()
    print(solve(n,s,k))





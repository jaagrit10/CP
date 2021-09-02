def unsolve(n,arr):
    freq  = {}
    for i in arr:
        if freq.get(i)!=None:
            freq[i] += 1

        else:
            freq[i] = 1


    key = freq.keys()
    distinct = 0
    ans = n
    maxoccuring = 0

    for j in key:
        maxoccuring = max(maxoccuring,freq[j])


    if maxoccuring<=n//2:
        print(n%2)

    else:
        print(2*maxoccuring - n)



for _ in range(int(input())):
    n = int(input())
    arr = [int(arr) for arr in input().split()]
    unsolve(n,arr)

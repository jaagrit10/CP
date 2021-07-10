def mountains(n,arr):
    ans = [-1]*n

    
    arr.sort()
    k  = 1000000000
    for i in range(n-1):
        diff = arr[i+1]-arr[i]

        if diff<k:
            ans[0] = arr[i]
            ans[n-1] = arr[i+1]
            k = diff


    i1 = arr.index(ans[0])
    arr[i1] = -1

    i2 = arr.index(ans[n-1])
    arr[i2] = -1
    # print(arr,i1,i2)
    
    update = n-2
    last = i1 -1
    while last > -1:
        ans[update] = arr[last]
        # print(ans[update])
        last -=1
        update-=1

    update_again = 1
    first = i2+1

    while first<len(arr):
        ans[update_again] = arr[first]
        first+=1
        update_again+=1






    print(*ans)
    return



for _ in range(int(input())):
    n = int(input())
    arr = [int(arr) for arr in input().split()]

    mountains(n,arr)




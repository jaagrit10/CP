import math
def recruits(n,arr,k):
    arr1 = arr[0:k]
    arr2 = arr[k:n]

    j=0

    for i in range(math.ceil(n/k)):
        if i%2==0:
            arr1=arr[j:min(j+k,n)]
            # print(arr1)
            arr1.sort()
            j+=k
            print(*arr1,end=' ')

        else:
            arr2 = arr[j:min(j+k,n)]
            # print(arr2)
            arr2.sort(reverse = True)
            j+=k
            print(*arr2,end=' ')



    # print(*arr1,*arr2)
    return



n=int(input())
arr=[int(arr) for arr in input().split()]
k=int(input())

recruits(n,arr,k)


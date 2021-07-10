def solve(n,m,k,arr1,arr2):
    
    ans = []
    
    

    
    zeroes = k
    while (len(arr1)>0 or len(arr2)>0):
        if len(arr1)>0 and arr1[0]==0:
            zeroes+=1
            ans.append(0)
            arr1.pop(0)

        elif len(arr2)>0 and arr2[0]==0:
            zeroes+=1
            ans.append(0)
            arr2.pop(0)

        elif len(arr1)>0 and arr1[0]<=zeroes:
            ans.append(arr1[0])
            arr1.pop(0)

        elif len(arr2)>0 and arr2[0]<=zeroes:
            ans.append(arr2[0])
            arr2.pop(0)

        else:
            print(-1)
            return




    print(*ans)
    return


for _ in range(int(input())):
    khali = input()
    k,n,m = map(int,input().split())
    arr1 = [int(arr1) for arr1 in input().split()]
    arr2 = [int(arr2) for arr2 in input().split()]
    solve(n,m,k,arr1,arr2)



    
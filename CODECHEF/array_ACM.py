def arrayop(arr):
    st=[]
    # max_=arr[0]
    for i in range(len(arr)-1):
        if arr[i]<=arr[i+1]:
            continue

        else:
            st.append(i)

    if len(st)>1:
        print(st[0]+1,st[-1]+2)
        return


    else:
        print(-1)
        return




n=int(input())
arr=[int(arr) for arr in input().split()]
arrayop(arr)




    
        
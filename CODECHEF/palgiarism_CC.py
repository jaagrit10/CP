def plag(n,m,k,arr):
    freq={}
    ans=[]
    for i in range(k):
        if freq.get(arr[i])!=None:
            freq[arr[i]]+=1

        else:
            freq[arr[i]]=1


    k=freq.keys()
    # print(freq
    count=0
    for i in k:
        if freq[i]>1 and i<n+1:
            count+=1
            ans.append(i)
    
    ans.sort()
    # ans=set(arr)
    # arr=list(arr)
    print(count,*ans)
    return



for _ in range(int(input())):
    n,m,k=map(int,input().split())
    arr=[int(arr) for arr in input().split()]
    plag(n,m,k,arr)




    
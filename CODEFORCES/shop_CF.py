def solve(n,f):
    mapping = {}
    sorter=[]
    ans = 0
    for i in range(n):
        days,customers = map(int,input().split())
        
        
        
        ans+=min(days,customers)
        sorter.append(min(2*days,customers)-min(days,customers))
        # print(ans)


    sorter.sort(reverse=True)
    # print(sorter)
    for i in range(f):
        ans+=sorter[i]



    print(ans)
    return


n,f = map(int,input().split())
solve(n,f)       
        



    
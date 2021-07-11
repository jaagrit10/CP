def solve(n,f):
    mapping = {}
    sorter=[]
    ans = 0
    for i in range(n):
        days,customers = map(int,input().split())
        
        
        
        if days!=0 and customers>days:
            diff = customers-days
            ans+=days
            if diff>days:
                diff = days
            sorter.append(diff)
 
        elif days!=0:
            ans+=customers
            sorter.append(0)
 
        # print(ans)
 
 
    sorter.sort(reverse=True)
    # print(sorter)
    for i in range(f):
        ans+=sorter[i]
 
 
 
    print(ans)
    return
 
 
n,f = map(int,input().split())
solve(n,f)       
        
 
 
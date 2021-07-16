def solve(n,m):
    freq = {}
    for i in range(m):
        p1, p2 = map(int,input().split())
        if freq.get(p1) != None:
            freq[p1].append(p2)

        else:
            freq[p1] = [p2]

        if freq.get(p2)!=None:
            freq[p2].append(p1)

        else:
            freq[p2] = [p1]



    key = freq.keys()
    found = True
    # for i in key:
    #     if len(freq[i])==1:
    #         found = True

    ans = 0
    # print(freq)
    singles = []


    while (found):
        found = False

        for i in key:
            if len(freq[i])==1:
                freq[i]=[]
                singles.append(i)
                found = True
        for i in singles:
            for j in freq.keys():
                if len(freq[j])==0:
                    continue
                else:
                    if i in freq[j]:
                        freq[j].remove(i)

                    

        # print(freq,found,singles)

        if found==True:
            ans+=1
        
        singles = []


    print(ans)
    return



n,m = map(int,input().split())
solve(n, m)




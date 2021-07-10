def matchbox(n, m):
    freq = {}
    sort = []

    inbag = 0
    matches = 0
    for i in range(m):
        matchbox, match = map(int,input().split())
        sort.append(match)


        if freq.get(match)!=None:
            freq[match].append(matchbox)

        else:
            freq[match] = [matchbox]

    sort = set(sort)
    sort = list(sort)

    sort.sort()



    for j in range(len(sort)-1,-1,-1):
        # print(sort[j])
        samebag = False
        for k in freq[sort[j]]:

            if inbag>=n and samebag==True:
                return matches - (inbag-n)*sort[j]

            elif inbag>=n and samebag==False:
                return matches - (inbag-n)*sort[j+1]


            else:
                inbag+=k
                samebag = True
                matches+=(k*sort[j])
                # print(inbag,matches)


    if inbag>n:
        return matches - (inbag-n)*sort[0]

    else:
        return matches



n, m = map(int,input().split())
print(matchbox(n,m))
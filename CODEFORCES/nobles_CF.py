def nobles(n,m):
    freq = {}
    record = []
    for i in range(m):
        x,y = map(int,input().split())
        record.append([1,x,y])
        if freq.get(x)!=None:
            freq[x].append(y)
            if freq.get(y)!=None:
                freq[y].append(x)

            else:
                freq[y] = [x]

        else:
            freq[x] = [y]
            if freq.get(y)!=None:
                freq[y].append(x)

            else:
                freq[y] = [x]


    for i in range(1,n+1):
        if freq.get(i)==None:
            freq[i] = []


    # dupli = freq
    # dupli[1].remove(2)
    # print(dupli)
    # print(freq)


    q = int(input())
    for f in range(q):
        type = [int(type) for type in input().split()]
        record.append(type)
        if type[0]==1:
            x = type[1]
            y = type[2]
            freq[x].append(y)
            freq[y].append(x)

        elif type[0]==2:
            x = type[1]
            y = type[2]
            freq[x].remove(y)
            freq[y].remove(x)
            # print(freq)

        else:
            sortop = freq.keys()
            for op in sortop:
                freq[op].sort()

            conti = 0
            continx = True
            while(continx):
                sortop = freq.keys()
                for op in sortop:
                    # print("hello")
                    if freq[op]!=None:
                        if len(freq[op])>=1 and freq[op][0]>op:
                            freq[op] = None
                            sortop = freq.keys()

                            for nice in sortop:
                                if freq[nice]!=None:
                                    if op in freq[nice]:
                                        freq[nice].remove(op)

                        
                        elif conti==n:
                            continx = False
                            break


                        else:
                            conti+=1

                    else:
                        if conti==n:
                            continx = False
                            break


                        else:
                            conti+=1


            # print(freq)


            sortop = freq.keys()
            sortopl = 0
            for finale in sortop:
                if freq[finale]!=None:
                    sortopl+=1
            print(sortopl)



            for i in range(1,n+1):
                if freq.get(i)==None:
                    freq[i] = []

            for rec in record:
                if rec[0]==1:
                    x = rec[1]
                    y = rec[2]
                    freq[x].append(y)
                    freq[y].append(x)

                elif rec[0]==2:
                    x = rec[1]
                    y = rec[2]
                    freq[x].remove(y)
                    freq[y].remove(x)
                    # print(freq)





            
                        






    # print(freq)





n,m = map(int, input().split())
nobles(n,m)
# 1
# 4 3
# 1 2
# 1 3
# 3 4
# 3
# 1 2 3
# 2 3 1
# 3



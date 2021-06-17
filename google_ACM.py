def googgle(k):
    freq={"g":0,"o":0,"l":0,"e":0,}
    for i in k:
        if freq.get(i)!=None:
            freq[i]+=1


    print(min(freq["g"]//2,freq["o"]//2,freq["l"],freq["e"]))

    return


for i in range(int(input())):
    k=input()
    googgle(k)
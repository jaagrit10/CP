def solve(a,b):
    sa = list(a)
    sb = list(b)
    arra = []
    arrb = []
    leng = []
    for i in range(len(sa)):
        for j in range(i,len(sa)):
            arra.append(sa[i:j+1])


    for i in range(len(sb)):
        for j in range(i,len(sb)):
            arrb.append(sb[i:j+1])

    for i in arra:
        if i in arrb:
            leng.append(len(i))

    if len(leng)!=0:
        max_leng = max(leng)

    else:
        max_leng = 0
    # print(arra,arrb)
    # print(leng)

    ans = len(sa) - 2*max_leng + len(sb)

    print(ans)

    return

for _ in range(int(input())):
    a = input()
    b = input()
    solve(a,b)

            


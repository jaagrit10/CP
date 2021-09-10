def solve(n, s):
    no_of_twos = 0
    ans = []
    freq = {}
    for i in range(n):
        ans.append([])
        for j in range(n):
            ans[i].append(0)

    for i in range(n):
        if s[i]=="2":
            no_of_twos+=1
            freq[i] = False

    no_of_ones = n-no_of_twos

    if no_of_twos-1<2 and no_of_twos>0:
        print("NO")
        return

    else:
        print("YES")
        for i in range(n):
            # onewin = False
            for j in range(i,n):
                if i==j:
                    ans[i][j]=("X")
                    ans[j][i]="X"

                elif s[i]=="1":
                    ans[i][j]="="
                    ans[j][i]="="

                else:
                    if s[j]=="1":
                        # ans.append("=")
                        ans[i][j]="="
                        ans[j][i]="="

                    elif freq[i]==False and freq[j] == False:
                        ans[i][j] = "+"
                        ans[j][i] = "-"
                        freq[i] = True

                    elif freq[i]==True and freq[j]==False:
                        ans[i][j] = "-"
                        ans[j][i] = "+"
                        freq[j] = True

                    elif freq[i]==True and freq[j]==True:
                        ans[i][j] = "="
                        ans[j][i] = "="

                    elif freq[i]==False and freq[j]==True:
                        ans[i][j] = "+"
                        ans[j][i] = "-"
                        freq[i] = True


                # print(freq,i,j)
                    



                    # elif onewin!=True:
                    #     print("hello",i,j)
                    #     # ans.append("+")
                    #     ans[i][j]="+"
                    #     ans[j][i] = "-"
                    #     onewin = True

                    # elif onewin==True:
                    #     ans.append("-")
                    #     ans[i][j] = "-"
                    #     ans[i][j] = "+"


    for i in range(n):
        for j in range(n):
            print(ans[i][j],end = '')

        print("")



for _ in range(int(input())):
    n = int(input())
    s = input()
    solve(n,s)


                        



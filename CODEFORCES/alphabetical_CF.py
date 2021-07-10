import string
lowercase = string.ascii_lowercase
# print(lowercase)
def alphabetical(s):
    s=list(s)
    


    
    if len(s)>26:
        print("no")
        return

    for i in range(len(s)):
        if lowercase[i] not in s:
            print("no")
            return

    for i in range(len(s)):
        if s[i]=='a':
            sleft = s[0:i]
            sright = s[i:]
            break

    for i in range(len(sleft)-1):
        index1 = lowercase.index(sleft[i])
        index2 = lowercase.index(sleft[i+1])
        if index1<index2:
            print('no')
            return

        else:
            continue

    for i in range(len(sright)-1):
        index1 = lowercase.index(sright[i])
        index2 = lowercase.index(sright[i+1])
        if index1>index2:
            print('no')
            return

        else:
            continue


    print('yes')
    return


for i in range(int(input())):
    s=input()
    alphabetical(s)



    


    


                



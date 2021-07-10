def charges(n,k,string,arr):
    original_length=0
    # print(string)
    for i in range(0,len(string)-1):
        if string[i]!=string[i+1]:
            original_length+=1

        else:
            original_length+=2

    string=list(string)
    # string.append("op")
    # print(string)
    # if k%2==0:
    #     return original_length1

    other=[0]
    if n==1:
        return other
    # print(string)
    ans=[]
    new_length=original_length
    
    for j in range(len(arr)):
        # new_length=original_length
        if arr[j]>1 and arr[j]<n:
            if string[arr[j]-1]!=string[arr[j]] and string[arr[j]-1]!=string[arr[j]-2]:
                # if string[arr[j]-1]=="0":
                #     string[arr[j]-1]="1"
                # else:
                #     string[arr[j]-1]="0"
                new_length+=2

            elif string[arr[j]-1]==string[arr[j]] and string[arr[j]-1]==string[arr[j]-2]:
                # if string[arr[j]-1]=="0":
                #     string[arr[j]-1]="1"
                # else:
                #     string[arr[j]-1]="0"
                new_length-=2

            

        elif arr[j]==1:
            if string[arr[j]-1]!=string[arr[j]]:
                # print("hello")
                new_length+=1
                # if string[arr[j]-1]=="0":
                #     string[arr[j]-1]="1"
                # else:
                #     string[arr[j]-1]="0"

            else:
                # if string[arr[j]-1]=="0":
                #     string[arr[j]-1]="1"
                # else:
                #     string[arr[j]-1]="0"
                new_length-=1


        elif arr[j]==len(string):
            if string[arr[j]-1]!=string[arr[j]-2]:
                new_length+=1
                # if string[arr[j]-1]=="0":
                #     string[arr[j]-1]="1"
                # else:
                #     string[arr[j]-1]="0"

            else:
                new_length-=1
                # if string[arr[j]-1]=="0":
                #     string[arr[j]-1]="1"
                # else:
                #     string[arr[j]-1]="0"

        if string[arr[j]-1]=="0":
            string[arr[j]-1]="1"
        else:
            string[arr[j]-1]="0"


        # print(string,new_length)


        ans.append(new_length)

            


    # new_length=0
    # for op in range(0,len(string)-1):
    #     if string[op]!=string[op+1]:
    #         new_length+=1

    #     else:
    #         new_length+=2

    return ans



for _ in range(int(input())):
    n,k=map(int,input().split())
    string=input()
    arr=[int(arr) for arr in input().split()]
    opans=charges(n,k,string,arr)
    for i in opans:
        print(i)

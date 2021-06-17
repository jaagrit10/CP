import string
lowercase=list(string.ascii_lowercase)
# print(lowercase)

def village(string):
    string=list(string)
    if len(string)==1:
        print("mythistrue")
        return

    # if string[0]!="a":
    #     string[0]="a"
    #     for op in string:
    #         print(op,end='')

    #     return



    for i in range(0,len(string)):
        idx1=lowercase

        if string[i]=="a" and i==len(string)-1:
            string[i]="b"

            for j in string:
                print(j,end='')
                
            return
            

        elif string[i]=="a":
            continue
        
    

        else:
            string[i]="a"

            for j in string:
                print(j,end='')

            return



for _ in range(int(input())):
    op1=input()
    village(op1)
    print()



    
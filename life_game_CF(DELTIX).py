def game(n,m,k):
    k=list(k)
    ones=[]
    ans=[0]*n
    count=0
    #finding positions of 1
    for j in range(n):
        if k[j]=="1":
            ones.append(j)

    if len(ones)==0:
        for done in range(len(k)):
            print(k[done],end='')
        return

    
    if ones[0]>0:
        if ones[0]<=m:
            for one_start in range(0,ones[0]):
                k[one_start]="1"

        if ones[0]>m:
            for one_startless in range(ones[0]-1,ones[0]-m-1,-1):
                k[one_startless]="1"

    for i in range(0,len(ones)-1):
        check=ones[i+1]-ones[i]-1
        if check>0 and (check)%2==0:
            if check//2<m:
                for even_1 in range(ones[i],ones[i+1]):
                    k[even_1]="1"
                

            elif check//2>=m:
                for even_1less in range(ones[i],ones[i]+m+1):
                    k[even_1less]="1"

                for even_1more in range(ones[i+1]-1,ones[i+1]-m-1,-1):
                    k[even_1more]="1"


        if check>0 and check%2!=0:
            if check//2<=m:
                for odd_1 in range(ones[i]+1,ones[i+1]):
                    if odd_1==(ones[i+1]+ones[i])//2:
                        k[odd_1]="0"

                    else:
                        k[odd_1]="1"

            elif check//2>m:
                for odd_1more in range(ones[i]+1,ones[i]+m+1):
                    k[odd_1more]="1"

                for odd_1less in range(ones[i+1]-1,ones[i+1]-m-1,-1):
                    k[odd_1less]="1"



    if ones[-1]<n:

        if (n-(ones[-1])-1)<=m:
            for one_last in range(ones[-1],n):
                k[one_last]="1"


        elif (n-(ones[-1]))>m:
            for one_lastless in range(ones[-1]+1,ones[-1]+m+1):
                k[one_lastless]="1"

    for fin in range(len(k)):
        print(k[fin],end='')


    return


for _ in range(int(input())):
    n,m=map(int,input().split())
    k=input()
    game(n,m,k)
    print()


                



            










            
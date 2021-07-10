# cook your dish here
import bisect 
M =5e5+5
factor = {}
for i in range(1,int(M)):
    for j in range(i,int(M),i):
        if factor.get(j)!=None:
        	factor[j].append(i)
        	 #appending in i in all the arrays whose index is a multiple of i.
            #i.e appending i at ll the places from 1 to m where i is a factor/divisor
            #perfect way to find the sorted divisors till a number n


        else:
        	factor[j]=[i]
# print(factor)
t = int(input())
for _ in range(t):
    N,M = map(int,input().split())
    ans = 0 
    for i in range(2,N+1):
    # 	given:
    # 1<a<b<=N

    # condition:
    # (m%a)%b==(m%b)%a

    # ==> m%a == (m%b)%a
    # ==> (m-m%b)%a==0
    # ==> (b*(m//b))%a==0

    # thus we have to find the number of factors of (b*(m//b)) less than b.
    # (because for every b iterated, each factor of the term computed corresponds to a value of 'a' and a<b)
        X = M - (M%i)
        if X!=0:
            ans += bisect.bisect_left(factor[X],i) 
            # print(factor[X],factor[X].index(i),X,M,i)
        else:
            ans += i-1 
            # print(M,i-1)
    print(ans)



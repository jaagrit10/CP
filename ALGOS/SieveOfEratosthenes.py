def sieveOfEratosthenes(n):
    primes=[True]*(n+1)
    i=2
    while i*i <=n:
        if primes[i]==True:
            for j in range(i*i,n+1,i):
                primes[j]=False

        i+=1


    prime_nos=[]

    for k in range(2,n+1):
        if primes[k]:
            prime_nos.append(k)


                

    return prime_nos


# print(sieveOfEratosthenes(20))





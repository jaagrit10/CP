
import sys

def get_inpt(): return sys.stdin.readline().strip()
def get_int(): return int(sys.stdin.readline().strip())
def get_ints(): return map(int, sys.stdin.readline().strip().split())
def get_array(): return list(map(int, sys.stdin.readline().strip().split()))

def p_str(x): sys.stdout.write(x+"\n")
def p_int(x): sys.stdout.write(str(x) + "\n")
def p_arr(arr): sys.stdout.write(" ".join(map(str, arr)) + "\n")


def SieveOfEratosthenes(n):
 
    
    arr=[]
    prime = [True for i in range(n+1)]
    p = 2
    while (p * p <= n):
 
        if (prime[p] == True):
 
            
            for i in range(p * p, n+1, p):
                prime[i] = False
        p += 1
 

    return prime
 




def solve(n,sieve):
    count=1
    for i in range(2,n+1):
        if i%2!=0:
            if sieve[i]:
                if i*2>n:
                    count+=1

    return count

sieve=SieveOfEratosthenes(10000000)
for _ in range(get_int()):
    n=get_int()
    
    print(solve(n,sieve))



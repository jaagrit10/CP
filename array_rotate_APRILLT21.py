import sys

def get_inpt(): return sys.stdin.readline().strip()
def get_int(): return int(sys.stdin.readline().strip())
def get_ints(): return map(int, sys.stdin.readline().strip().split())
def get_array(): return list(map(int, sys.stdin.readline().strip().split()))

def p_str(x): sys.stdout.write(x+"\n")
def p_int(x): sys.stdout.write(str(x) + "\n")
def p_arr(arr): sys.stdout.write(" ".join(map(str, arr)) + "\n")



n=get_int()
arr=get_array()
q=get_int()
query=get_array()
sum_=sum(arr)

for i in range(q):
	m=10**9+7
	result=(sum_)
	result=result%m
	print(2**(i+1)*result)

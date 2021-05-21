import sys

def get_inpt(): return sys.stdin.readline().strip()
def get_int(): return int(sys.stdin.readline().strip())
def get_ints(): return map(int, sys.stdin.readline().strip().split())
def get_array(): return list(map(int, sys.stdin.readline().strip().split()))

def p_str(x): sys.stdout.write(x+"\n")
def p_int(x): sys.stdout.write(str(x) + "\n")
def p_arr(arr): sys.stdout.write(" ".join(map(str, arr)) + "\n")

def golf(n,x,k):
	rem=(n+1)%k
	if x%k==0 or x%k==rem:
		return "YES"


	return "NO"




for _ in range(get_int()):
	n,x,k=get_ints()
	print(golf(n,x,k))

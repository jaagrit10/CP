import sys

def get_inpt(): return sys.stdin.readline().strip()
def get_int(): return int(sys.stdin.readline().strip())
def get_ints(): return map(int, sys.stdin.readline().strip().split())
def get_array(): return list(map(int, sys.stdin.readline().strip().split()))

def p_str(x): sys.stdout.write(x+"\n")
def p_int(x): sys.stdout.write(str(x) + "\n")
def p_arr(arr): sys.stdout.write(" ".join(map(str, arr)) + "\n")

def stairs(arr,n):
	freq={}
	for i in range(n):
		if arr[i]!=None:
			return "yes"

		else:
			freq[arr[i]]=1

	return "no"


for _ in range(get_int()):
	n=get_int()
	arr=get_array()
	print(stairs(arr,n))


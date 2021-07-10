import sys

def get_inpt(): return sys.stdin.readline().strip()
def get_int(): return int(sys.stdin.readline().strip())
def get_ints(): return map(int, sys.stdin.readline().strip().split())
def get_array(): return list(map(int, sys.stdin.readline().strip().split()))

def p_str(x): sys.stdout.write(x+"\n")
def p_int(x): sys.stdout.write(str(x) + "\n")
def p_arr(arr): sys.stdout.write(" ".join(map(str, arr)) + "\n")



def solve(n,a,b):
	SARTHAK=0
	ANURADHA=0
	for i in range(n):
		string=get_inpt()

		if string[0] in "EQUINOX":
			SARTHAK+=a
		else:
			ANURADHA+=b

	if SARTHAK>ANURADHA:
		return "SARTHAK"

	elif SARTHAK<ANURADHA:
		return "ANURADHA"

	else:
		return "DRAW"

for j in range(int(input())):
	n,a,b=get_ints()
	
	print(solve(n,a,b))






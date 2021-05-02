import sys

def get_inpt(): return sys.stdin.readline().strip()
def get_int(): return int(sys.stdin.readline().strip())
def get_ints(): return map(int, sys.stdin.readline().strip().split())
def get_array(): return list(map(int, sys.stdin.readline().strip().split()))

def p_str(x): sys.stdout.write(x+"\n")
def p_int(x): sys.stdout.write(str(x) + "\n")
def p_arr(arr): sys.stdout.write(" ".join(map(str, arr)) + "\n")


def gym(n,w,wr,arr):
	if w<=wr:
		return "YES"
	else:
		final=wr
		freq={}
		for i in range(n):
			if freq.get(arr[i])!=None:
				freq[arr[i]]+=1
			else:
				freq[arr[i]]=1

		weights=freq.keys()
		# print(freq)

		for j in weights:
			if freq[j]%2==0:
				while freq[j]>0:
					final+=j*2
					freq[j]-=2

					if final>=w:
						return "YES"

		return "NO"



for _ in range(get_int()):
	n,w,wr=get_ints()
	arr=get_array()
	print(gym(n,w,wr,arr))

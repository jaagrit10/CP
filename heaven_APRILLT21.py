import math 
import sys

def get_inpt(): return sys.stdin.readline().strip()
def get_int(): return int(sys.stdin.readline().strip())
def get_ints(): return map(int, sys.stdin.readline().strip().split())
def get_array(): return list(map(int, sys.stdin.readline().strip().split()))

def p_str(x): sys.stdout.write(x+"\n")
def p_int(x): sys.stdout.write(str(x) + "\n")
def p_arr(arr): sys.stdout.write(" ".join(map(str, arr)) + "\n")


def heaven(year,string):
	freq={0:0,1:0}
	for i in range(year):
		if string[i]=="1":
			freq[1]+=1
			if freq[1]>=(i+1)//2 and (i+1)%2==0:
				return "YES"
			elif freq[1]>=((i+1)//2+1) and (i+1)%2!=0:
				return "YES"

		else:
			freq[0]+=1

	if freq[1]>=year//2 and year%2==0:
		return "YES"
	elif freq[1]>=(year//2+1) and year%2!=0:
		return "YES"

	return "NO"


t=get_int()
for j in range(t):
	year=get_int()
	string=get_inpt()
	print(heaven(year,string))




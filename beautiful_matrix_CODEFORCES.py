import sys

def get_inpt(): return sys.stdin.readline().strip()
def get_int(): return int(sys.stdin.readline().strip())
def get_ints(): return map(int, sys.stdin.readline().strip().split())
def get_array(): return list(map(int, sys.stdin.readline().strip().split()))

def p_str(x): sys.stdout.write(x+"\n")
def p_int(x): sys.stdout.write(str(x) + "\n")
def p_arr(arr): sys.stdout.write(" ".join(map(str, arr)) + "\n")

matrix=[]
for i in range(5):
	arr=get_array()
	matrix.append(arr)


def find1(matrix):
	for i in range(5):
		for k in range(5):
			if matrix[i][k]==1:
				return [i,k]

	return -1

li=find1(matrix)
# p_int(li)
total=abs(li[0]-2)+abs(li[1]-2)
print(total)

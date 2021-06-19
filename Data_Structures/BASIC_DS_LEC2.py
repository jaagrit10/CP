import sys

def get_inpt(): return sys.stdin.readline().strip()
def get_int(): return int(sys.stdin.readline().strip())
def get_ints(): return map(int, sys.stdin.readline().strip().split())
def get_array(): return list(map(int, sys.stdin.readline().strip().split()))

def p_str(x): sys.stdout.write(x+"\n")
def p_int(x): sys.stdout.write(str(x) + "\n")
def p_arr(arr): sys.stdout.write(" ".join(map(str, arr)) + "\n")



# question in class
# final=[]
# sum_=0
# n,x=get_ints()
# string=get_inpt()
# arr=[str(arr) for arr in input().split()]

# for i in range(n):
# 	if string[i] not in arr:
# 		final.append(0)

# 	else:
# 		final.append(1)
# # print(final)

# count=0

# for j in range(len(final)):
	
# 	if final[j]==0:

# 		sum_+=((count)*(count+1)//2)
# 		# print(sum_)
# 		count=0

# 	else:
# 		count+=1
# sum_+=((count)*(count+1)//2)
# print(sum_)


# #ques in class

# for _ in range(get_int()):
# 	n=get_int()
# 	arr=get_array()
# 	trip=get_int()
# 	cum=[0]
# 	kie=0
# 	for k in range(n):
# 		kie+=arr[k]
# 		cum.append(kie)

# 	# print(cum)

# 	for i in range(trip):
# 		sum_=0
# 		s,e=get_ints()
# 		print(cum[e]-cum[s-1])






# making a class in python

class complexnumber:
	real=0
	img=0

	def __init__(self, real, img):
		self.real=real
		self.img=img

	# def __init__(self):
	# 	self.real=-1
	# 	self.img=-1

	def display(self):
		print(self.real,f"+i{self.img}")

c1=complexnumber(5,3) #this calls the class constructor 
c1.display()

class algo:
	nu1=0
	nu2=0
	func=str()

	def __init__(self,nu1,nu2,func):
		self.nu1=nu1
		self.nu2=nu2
		self.func=func

	def dis(self):
		if self.func=='m':
			print(self.nu1*self.nu2)

		elif self.func=='a':
			print(self.nu1+self.nu2)


ans=algo(3,2,"a")
ans.dis()


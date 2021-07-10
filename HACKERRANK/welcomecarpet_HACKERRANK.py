n,m=input().split()
n=int(n)
m=int(m)
space=0
for i in range(n//2,0,-1):
	print("-"*(3*i),end='')
	print(".|",end="")
	print("..|"*space,end="")
	print(".",end='')
	space+=2

	# print(' '*(space*3),end='')
	# space+=2
	print("-"*(3*i))


print("-"*(m//2-3),end='')
print('WELCOME',end='')
print("-"*(m//2-3))

space-=2
for j in range(1,n//2+1):
	print("-"*(3*j),end='')
	print(".|",end="")
	print("..|"*space,end="")
	print(".",end='')
	space-=2

	# print(" "*(space*3),end='')
	# space-=2
	print("-"*(3*j))



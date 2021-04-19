n=int(input())

spacing = len(bin(n)[2:])
def normal(i):
	return str(i)
def octal(k):
	final=str()
	while k>=1:
		final=final+str(k%8)
		k=k//8

	final=list(final)
	o=len(final)
	result=str()
	while o>0:
		result+=str(final[o-1])
		o-=1

	return str(result)

def hexadecimalrep(hexa):
	hexadecimal=str()
	while hexa>=1:
		remainder=hexa%16
		if remainder==10:
			hexadecimal=hexadecimal+str('A')
		elif remainder==11:
			hexadecimal=hexadecimal+str('B')
		elif remainder==12:
			hexadecimal=hexadecimal+str('C')
		elif remainder==13:
			hexadecimal=hexadecimal+str('D')
		elif remainder==14:
			hexadecimal=hexadecimal+str('E')
		elif remainder==15:
			hexadecimal=hexadecimal+str('F')
		else:
			hexadecimal=hexadecimal+str(remainder)

		hexa=hexa//16
	hexadecimal=list(hexadecimal)
	six=len(hexadecimal)
	rep=str()
	while six>0:
		
		rep+=str(hexadecimal[six-1])
		six-=1

	return str(rep)

def binary(deci):
	binary=str()
	while deci>=1:
		binary=binary+str(deci%2)
		deci=deci//2

	binary=list(binary)
	two=len(binary)
	op=str()
	while two>0:
		
		op+=str(binary[two-1])
		two-=1

	return str(op)


	



for i in range(1,n+1):
	print(normal(i).rjust(spacing," "),octal(i).rjust(spacing," "),hexadecimalrep(i).rjust(spacing," "),binary(i).rjust(spacing," "))































	# print(i,end=' ')
	# k=i
	# final=str()
	# while k>=1:
	# 	final=final+str(k%8)
	# 	k=k//8

	# final=list(final)
	# o=len(final)
	# while o>0:
	# 	print(final[o-1],end='')
	# 	o-=1
	# print(end=" ")




	# hexa=i #hexadecimal represe
	# hexadecimal=str()
	# while hexa>=1:
	# 	remainder=hexa%16
	# 	if remainder==10:
	# 		hexadecimal=hexadecimal+str('A')
	# 	elif remainder==11:
	# 		hexadecimal=hexadecimal+str('B')
	# 	elif remainder==12:
	# 		hexadecimal=hexadecimal+str('C')
	# 	elif remainder==13:
	# 		hexadecimal=hexadecimal+str('D')
	# 	elif remainder==14:
	# 		hexadecimal=hexadecimal+str('E')
	# 	elif remainder==15:
	# 		hexadecimal=hexadecimal+str('F')
	# 	else:
	# 		hexadecimal=hexadecimal+str(remainder)

	# 	hexa=hexa//16
	# hexadecimal=list(hexadecimal)
	# six=len(hexadecimal)
	# while six>0:
	# 	print(hexadecimal[six-1],end="")
	# 	six-=1

	# print(end=' ')

	# #binary representation

	# deci=i
	# binary=str()
	# while deci>=1:
	# 	binary=binary+str(deci%2)
	# 	deci=deci//2

	# binary=list(binary)
	# two=len(binary)
	# while two>0:
	# 	print(binary[two-1],end='')
	# 	two-=1

	# print(" ")




	# 
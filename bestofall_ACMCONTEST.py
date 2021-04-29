n,k=input().split()
n=int(n)
k=int(k)
a=[int(a) for a in input().split()]
b=[int(b) for b in input().split()]
sumar=[]
if min(a)<min(b):
	index=b.index(min(b))
	a[index]=a[index]-k
	for i in range(n):
		sum_=a[i]*b[i]
		sumar.append(sum_)

	a[index]=a[index]+k

else:
	index=a.index(min(a))
	b[index]=b[index]-k
	for j in range(n):
		sum_=a[j]*b[j]
		sumar.append(sum_)

	b[index]=b[index]+k

if max(a)>max(b):
	index2=a.index(max(a))
	b[index]=b[index]+k
	for t in range(n):
		sum_=a[t]*b[t]
		sumar.append(sum_)

	b[index]=b[index]-k

else:
	index2=b.index(max(b))
	a[index]=a[index]+k
	for o in range(n):
		sum_=a[o]*b[o]
		sumar.append(sum_)

	a[index]=a[index]-k

print(max(sumar))










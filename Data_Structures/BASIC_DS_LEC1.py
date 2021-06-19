import array as arr

x=arr.array('i',[1,2,3,4,5])

print(x,type(x))

for element in x:
	print(element)

x[0]=99
print(x[0])
f=arr.array('d',[9.8,6.7])
print(f[0])


#question in class
def arrayrotate(n,k,arr,final):
	final=arr[n-k:n]+arr[0:n-k]
	return final
arr=[1,2,3,4,5,6,7]
final=[]
print(arrayrotate(7,3,arr,final))



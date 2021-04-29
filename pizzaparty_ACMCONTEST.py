def pizza(pizza,count):
	for j in range(len(pizza)):
		k=pizza[j]
		if count.get(k)!=None:
			count[k]+=1

		else:
			count[k]=1

	keys=count.keys()
	for y in keys:
		if 2*count[y]==len(pizza):
			return "YES"

	return "NO"



t=int(input())
for i in range(t):
	pizzk=input()
	count={}
	print(pizza(pizzk,count))
	# for j in range(len(pizza)):
	# 	k=pizza[j]
	# 	if count.get(k)!=None:
	# 		count[k]+=1

	# 	else:
	# 		count[k]=1

	# keys=count.keys()
	# for y in keys:
	# 	if 2*count[y]==len(pizza):
	# 		print("YES")

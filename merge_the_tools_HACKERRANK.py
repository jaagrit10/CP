def merge_the_tools(string,k):
	cut=len(string)//k
	i=0
	while i<len(string)-k+1:
		ti=string[i:i+k]
		frequency={}
		ans=str()
		for j in range(len(ti)):
			if ti[j] not in ans:
				ans+=ti[j]

		print(ans)
		# 	if frequency.get(ti[j])!=None:
		# 		frequency[ti[j]]+=1

		# 	else:
		# 		frequency[ti[j]]=1

		# keys=list(frequency.keys())
		# print(keys)
		# for keys in ti:
		# 	print(keys,end='')

		


		i+=k

	return

merge_the_tools("AABBCCDDAA",5)
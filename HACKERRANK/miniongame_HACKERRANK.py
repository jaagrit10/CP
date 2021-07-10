def game(string):
 	string=list(string)
 	stuart={}
 	kevin={}
 	vowels=['a','e','i','o','u']
 	
 	
	frequency={}
 	for i in range(len(string)):
 		for j in range(i+1,len(string)+1):
 			k=string[i:j]
 			

 			if k[0]=='A' or k[0]=='E' or k[0]=='I' or k[0]=='O' or k[0]=='U':
 				k=str(k)
 				if kevin.get(k)!=None:
 					kevin[k]+=1
 				else:
 					kevin[k]=1

 			else:
 				k=str(k)
 				if stuart.get(k)!=None:
 					stuart[k]+=1
 				else:
 					stuart[k]=1


 	vowel=sum(kevin.values())
 	# print(vowel)
 	conso=sum(stuart.values())
 	if vowel>conso:
 		return ["Kevin",vowel]

 	elif vowel<conso:
 		# return ["Stuart",conso]
 		return ["Stuart",conso]







 	
 	return ["draw"]

ch=input()
print(*game(ch))



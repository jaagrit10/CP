ch=input()
def switchcase(ch):
	alphabet=['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z']
	ALPHA=['A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z']
	ans=str()

	for i in range(len(ch)):
		if ch[i] in alphabet:
			index=alphabet.index(ch[i])
			ans+=ALPHA[index]

		elif ch[i] in ALPHA:
			index1=ALPHA.index(ch[i])
			ans+=alphabet[index1]


		else:
			ans+=ch[i]


	return ans


print(switchcase(ch))
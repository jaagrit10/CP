def printrangoli(n):
	alphabet=["lol",'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z']
	ans=str()

	for i in range(n-1,-1,-1):
		if i==n-1:
			print("-"*(2*i),end="")
			# ans+=("-"*(2*i))
			for k in range(n,i,-1):
				# print(alphabet[k],end="-")
				if k==i+1:
					print(alphabet[k],end='')
				else:
					print(alphabet[k],end="-")

				# ans+=(alphabet[k]+"-")



			for j in range(i+2,n+1):
				# print(alphabet[j],end='-')
				if j==n:
					print(alphabet[j],end='')
				else:
					print(alphabet[j],end='-')
				# ans+=(alphabet[j]+"-")

			print("-"*(2*i))
			# ans+=("-"*(2*i))+"\n"
		else:

			print("-"*(2*i),end="")
			# ans+=("-"*(2*i))
			for k in range(n,i,-1):
				# print(alphabet[k],end="-")
				if k==i+1:
					print(alphabet[k],end='-')
				else:
					print(alphabet[k],end="-")

				# ans+=(alphabet[k]+"-")



			for j in range(i+2,n+1):
				# print(alphabet[j],end='-')
				if j==n:
					print(alphabet[j],end='')
				else:
					print(alphabet[j],end='-')
				# ans+=(alphabet[j]+"-")

			print("-"*(2*i))
			# ans+=("-"*(2*i))+"\n"


	for h in range(1,n):
		if h==n-1:
			print("-"*(2*h),end="")
			# ans+=("-"*(2*h))
			for p in range(n,h,-1):
				# print(alphabet[p],end='-')
				if p==h+1:
					print(alphabet[p],end='')
				else:
					print(alphabet[p],end='-')
				# ans+=(alphabet[p]+'-')

			for o in range(h+2,n+1):
				# print(alphabet[o],end='-')
				if o==n:
					print(alphabet[o],end='')
				else:
					print(alphabet[o],end='-')

				# ans+=(alphabet[o]+'-')

			print("-"*(2*h))
			# ans+=("-"*(2*h))+"\n"

		else:


			print("-"*(2*h),end="")
			# ans+=("-"*(2*h))
			for p in range(n,h,-1):
				# print(alphabet[p],end='-')
				if p==h+1:
					print(alphabet[p],end='-')
				else:
					print(alphabet[p],end='-')
				# ans+=(alphabet[p]+'-')

			for o in range(h+2,n+1):
				# print(alphabet[o],end='-')
				if o==n:
					print(alphabet[o],end='')
				else:
					print(alphabet[o],end='-')

				# ans+=(alphabet[o]+'-')

			print("-"*(2*h))
			# ans+=("-"*(2*h))+"\n"


	return ans








n=int(input())
print(printrangoli(n))
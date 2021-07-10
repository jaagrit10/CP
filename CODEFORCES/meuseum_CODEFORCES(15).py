# http://codeforces.com/contest/731/problem/A
import string
k=list(string.ascii_lowercase)

def night(s,k):
	sum_=min(abs(k.index(s[0])),abs(26-(k.index(s[0]))))

	for i in range(1,len(s)):
		l=min(abs(k.index(s[i])-k.index(s[i-1])),abs(26-abs(k.index(s[i])-k.index(s[i-1]))))
		sum_+=l

	print(sum_)
	return


s=input()
night(s,k)
# http://codeforces.com/contest/266/problem/A
def game(n,s):
	count=0

	for i in range(1,n):
		if s[i-1]==s[i]:
			count+=1


	print(count)

	return


n=int(input())
s=input()
game(n,s)

# http://codeforces.com/contest/732/problem/A
def shovel(k,r):
	for i in range(1,11):
		if (k*i)%10==0 or (k*i)%10==r:
			return i



k,r=input().split()
k=int(k)
r=int(r)

print(shovel(k,r))

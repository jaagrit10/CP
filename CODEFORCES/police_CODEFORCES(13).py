# http://codeforces.com/contest/427/problem/A
def police(n,arr):
	police=0
	sum_=0
	for i in range(1,n):
		arr[i]=arr[i]+arr[i-1]

	if min(arr)<0:
		print(abs(min(arr)))

	else:
		print(0)




	
	return

n=int(input())
arr=[int(arr) for arr in input().split()]
police(n,arr)

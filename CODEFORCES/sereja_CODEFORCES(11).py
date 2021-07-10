# http://codeforces.com/contest/381/problem/A
def cards(n,arr):
	sereja,dima=0,0
	for i in range(n):
		if i%2==0:
			sereja+=max(arr[0],arr[len(arr)-1])
			k=max(arr[0],arr[len(arr)-1])
			arr.remove(k)

		else:
			dima+=max(arr[0],arr[len(arr)-1])
			y=max(arr[0],arr[len(arr)-1])
			arr.remove(y)


	print(sereja,dima)
	return


n=int(input())
arr=[int(arr) for arr in input().split()]
cards(n,arr)

# http://codeforces.com/contest/431/problem/A
def game(arr,s):
	dic={}
	for i in range(1,5):
		dic[i]=arr[i-1]

	sum_=0
	for i in range(len(s)):
		sum_+=dic[int(s[i])]


	print(sum_)

	return


arr=[int(arr) for arr in input().split()]
s=input()
game(arr,s)

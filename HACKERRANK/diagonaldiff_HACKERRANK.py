import math

n=int(input())
matrix=[]
for j in range(n):
	arr=[int(arr) for arr in input().split()]
	matrix.append(arr)

sum1=0
sum2=0



for i in range(n):
	# print(matrix[i][n-1-i],matrix[i][n-1-i])

	sum1+=matrix[i][n-1-i]
	sum2+=matrix[i][i]

print(abs(sum1-sum2))




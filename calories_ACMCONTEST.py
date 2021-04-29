def maxSum(arr, n, k):
  
    
    
    res = 0
    for i in range(k):
        res += arr[i]
  
    
    curr_sum = res
    for i in range(k, n):
      
        curr_sum += arr[i] - arr[i-k]
        res = max(res, curr_sum)
  
    return res

n,k=input().split()
n=int(n)
k=int(k)
calories=[int(calories) for calories in input().split()]
count=[]

# for i in range(n-k+1):
# 	sum_=sum(calories[i:i+k])
# 	count.append(sum_)

# print(max(count))


  

print(maxSum(calories, n, k))


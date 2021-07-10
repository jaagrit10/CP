import math
for _ in range(int(input())):
    n = int(input())
    arr = [int(arr) for arr in input().split()]
    average_diff1 = math.ceil(sum(arr)/n) - sum(arr)/n
    average_diff2 = abs(sum(arr)//n - sum(arr)/n)
    ans = n*(average_diff1*average_diff2)*n
    # print(average_diff2,average_diff1,sum(arr),math.ceil(sum(arr)/n),sum(arr)/n)
    diff = 0
    

    print(math.ceil(ans))
def good(n,arr):
    sum_ = sum(arr)

    if sum_/n == 1.0:
        return 0

    if sum_ >n:
        return sum_-n

    if sum_ <n :
        return 1



for i in range(int(input())):
    n=int(input())
    arr=[int(arr) for arr in input().split()]
    print(good(n,arr))

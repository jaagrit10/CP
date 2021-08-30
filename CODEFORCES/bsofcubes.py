def unsolved(n,arr):
    for i in range(1,10001):
        if arr[i]>n:
            print("NO")
            return

        else:
            temp = n-arr[i]
            lo = 1
            hi = 10000
            while (lo<=hi):
                mid = (lo+hi)//2
                if arr[mid]==temp:
                    print("YES")
                    return

                elif arr[mid]>temp:
                    hi = mid - 1

                else:
                    lo = mid + 1


    print("NO")
    return


arr = [0]
for i in range(1,10001):
    arr.append(i**3)
for k in range(int(input())):
    n = int(input())
    unsolved(n,arr)
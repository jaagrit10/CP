for _ in range(int(input())):
    n, k = map(int,input().split())
    s = input()
    count = 0
    for i in range(0,n//2):
        if s[i]!=s[n-i-1]:
            count+=1
            
    if k==count:
        print(0)
    elif k>count:
        print(k-count)
    else:
        print(count - k)
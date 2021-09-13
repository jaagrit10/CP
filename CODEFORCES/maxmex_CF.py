def solve(n,arr):
    sum = 0
    i = 0
    while(i<n):
        if (arr[0][i]=='1' and arr[1][i]=='0') or (arr[0][i]=='0' and arr[1][i]=='1'):
            
            sum+=2
            i+=1
        elif arr[0][i]=='0' and arr[1][i]=='0':
            if i+1<n and arr[0][i+1]=='1' and arr[1][i+1]=='1':
                
                sum+=2
                i+=2
            else:
                
                sum+=1
                i+=1

        elif arr[0][i]=='1' and arr[1][i]=='1':
            if i+1<n and arr[0][i+1]=='0' and arr[1][i+1]=='0':
                
                sum+=2
                i+=2
            else:
                i+=1

        else:
            i+=1
        

        
    print(sum)

        

        





for _ in range(int(input())):
    n = int(input())
    arr = []
    s1 = input()
    s2 = input()
    arr.append(list(s1))
    arr.append(list(s2))
    solve(n,arr)
    

            

        


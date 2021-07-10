import sys

def get_inpt(): return sys.stdin.readline().strip()
def get_int(): return int(sys.stdin.readline().strip())
def get_ints(): return map(int, sys.stdin.readline().strip().split())
def get_array(): return list(map(int, sys.stdin.readline().strip().split()))

def p_str(x): sys.stdout.write(x+"\n")
def p_int(x): sys.stdout.write(str(x) + "\n")
def p_arr(arr): sys.stdout.write(" ".join(map(str, arr)) + "\n")


def cheating(n,k,f):
    arr=[0]*(f+2)
    for i in range(n):
        s,e=get_ints()
        arr[s]+=1
        arr[e]-=1

    for i in range(1,f+1):
        arr[i]=arr[i]+arr[i-1]

    count=0
    # ans=[]
    for j in range(f+1):
        if arr[j]==0:
            count+=1
            if count>=k:
                return "YES"

        else:
            # ans.append(count)
            count=0

    return "NO"



# def cheat(n,k,f,arr):
#     for i in range(n-1):cls
#         if abs(arr[i][1]-arr[i+1][0])>=k:
#             return "YES"

#         if i==n-2:
#             if abs(arr[i][1]-f)>=k:
#                 return "YES"

        

#     return "NO"

        




for _ in range(get_int()):
    n,k,f=get_ints()
    # times=[]
    # for i in range(n):
    #     s,e=map(int,input().split())
    #     times.append([s,e])

    # print(cheat(n,k,f,times))
    op=cheating(n,k,f)
    print(op)

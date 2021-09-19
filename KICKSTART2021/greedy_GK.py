# def solve(d,n,k):
#     days = {}
#     for i in range(d):
#         days[i] = []
#     for i in range(n):
#         hi,si,ei = map(int,input().split())
#         for i in range(si,ei+1):
#             if len(days[i])<=k:
#                 days[i].append(hi)

#             else:
#                 if hi>min(days[i]):
#                     days[i].append(hi)


#     ans = 0
#     for i in range(d):
#         ans = max(ans,sum(days[i]))


#     return ans



for op in range(int(input())):
    d,n,k = map(int,input().split())
    days = {}
    for i in range(1,d+1):
        days[i] = []
    for j in range(n):
        hi,si,ei = map(int,input().split())
        for i in range(si,ei+1):
            # print(days,j,hi)
            if len(days[i])+1<=k:
                days[i].append(hi)

            else:
                if hi>min(days[i]):
                    days[i].remove(min(days[i]))
                    # print(days[i])
                    days[i].append(hi)
                    # print(days[i])


    ans = 0
    # print(len(days[4]))
    for i in range(1,d+1):
        ans = max(ans,sum(days[i]))
    print("Case #",end='')
    print(op+1,end='')
    print(":",ans)

# arr= [1,2,3]
# arr.remove(min(arr))
# print(arr)
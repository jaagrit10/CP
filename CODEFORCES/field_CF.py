# could not solve 
# TLE On test case 4


# Correct code:
# line = [int(x) for x in input().split()]
# rows = line[0]
# cols = line[1]
# k = line[2]
# t = line[3]
 
# waste = []
# res = ["Carrots", "Kiwis", "Grapes"]
 
# for case in range(k):
#     waste.append([int(x) for x in input().split()])
 
# for q in range(t):
#     query = [int(x) for x in input().split()]
#     foundWaste = False
#     pre = 0
#     for w in waste:
#         if w[0] < query[0]:
#             pre +=1 
#         if w[0] == query[0]:
#             if w[1] < query[1]:
#                 pre += 1
#             elif w[1] == query[1]:
#                 foundWaste = True
#                 break
#     if foundWaste:
#         print("Waste")
#     else: 
#         print(res[((query[0]-1)*cols+query[1]-pre-1) % 3])
 


def solve(n, m, k, t):
    nice = {}
    for i in range(1,n+1):
        for j in range(1,m+1):
            check = (i,j)
            nice[check] = "Empty"
    for i in range(k):
        r,c = map(int,input().split())
        tup = (r,c)
        nice[tup] = "Waste"
    carrots = True
    kiwis = False
    grapes = False

    

    for i in range(1,n+1):
        for j in range(1,m+1):
            check = (i,j)
            if nice[check]=="Waste":
                continue

            else:
                if carrots==True:
                    nice[check] = "Carrots"
                    kiwis = True
                    carrots = False
                elif kiwis==True:
                    nice[check] = "Kiwis"
                    kiwis = False
                    grapes = True

                elif grapes==True:
                    nice[check] = "Grapes"
                    grapes = False
                    carrots = True


    for i in range(t):
        r,c = map(int,input().split())
        check = (r,c)
        print(nice[check])

    return


n,m,k,t = map(int,input().split())
solve(n,m,k,t)
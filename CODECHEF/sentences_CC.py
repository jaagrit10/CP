import string
lowercase=list(string.ascii_lowercase)
uppercase=list(string.ascii_uppercase)
lowercase=lowercase[0:13]
uppercase=uppercase[13:]
# print(uppercase,lowercase)

def sentences(k):
    
    if k[0] in lowercase:
        for j in k:
            # print(j)
            if j in uppercase or j not in lowercase:
                return "NO"

    else:
        for j in k:
            if j in lowercase or j not in uppercase:
                return "NO"

    
    return "YES"



for _ in range(int(input())):
    arr=[str(arr) for arr in input().split()]
    for i in range(1,int(arr[0])+1):
        k=sentences(arr[i])
        # print(k,arr[i])
        if k=="NO":

            print(k)
            break

        if k=="YES" and i==int(arr[0]):
            print("YES")

# print(sentences("NOp"))

                    

def buildings(n,m,arr):
    green_block=m
    red_block=0
    for i in range(n-1):
        if arr[i]>arr[i+1]:
            red_block=arr[i]-arr[i+1]
            

        elif arr[i]<arr[i+1] and red_block!=0:
            if arr[i]+red_block>=arr[i+1]:
                red_block=arr[i]+red_block-arr[i+1]

            elif red_block+green_block+arr[i]<arr[i+1]:
                return "NO"

            elif arr[i]+green_block+red_block>=arr[i+1]:
                green_block=green_block-(arr[i+1]-(arr[i]+red_block))
                red_block=0


        elif arr[i]<arr[i+1] and red_block==0:
            if arr[i]+green_block<arr[i+1]:
                return "NO"

            else:
                green_block=arr[i+1]-arr[i]
                



            




            

    return "YES"
                

n,m=map(int,input().split())
arr=[int(arr) for arr in input().split()]
print(buildings(n,m,arr))
            
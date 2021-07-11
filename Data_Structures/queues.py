# pop and push for a circular queue
def pop_CQ(arr,head,tail):
    vacany = 0
    # if arr[head]==-1

    arr[head[0]] = -1
    head[0]+=1
    # tail[0] = len(arr) - 1




    print("successfully popped",arr)
    return arr


def push_CQ(arr,head,tail,element):
    tail[0]+=1
    tail[0] = tail[0]%(len(arr))

    if arr[tail[0]] != -1:
        print("not enough space",arr)
        tail[0] -=1
        tail[0] = tail[0]%(len(arr))
        return arr

    else:
        arr[tail[0]] = element
        print("successfully pushed in",arr)
        return arr



# arr=[-1]*10
# head = [0]
# tail = [len(arr)-1]

# pop_CQ(arr,head,tail)
# pop_CQ(arr,head,tail)
# pop_CQ(arr,head,tail)
# pop_CQ(arr,head,tail)

# push_CQ(arr,head,tail,1)
# push_CQ(arr,head,tail,2)
# push_CQ(arr,head,tail,3)
# push_CQ(arr,head,tail,4)
# push_CQ(arr,head,tail,5)
# push_CQ(arr,head,tail,6)

# push_CQ(arr,head,tail,7)
# push_CQ(arr,head,tail,8)
# push_CQ(arr,head,tail,9)
# push_CQ(arr,head,tail,10)
# pop_CQ(arr,head,tail)
# pop_CQ(arr,head,tail)
# pop_CQ(arr,head,tail)
# pop_CQ(arr,head,tail)
# pop_CQ(arr,head,tail)
# pop_CQ(arr,head,tail)
# pop_CQ(arr,head,tail)
# pop_CQ(arr,head,tail)
# pop_CQ(arr,head,tail)
# pop_CQ(arr,head,tail)
# pop_CQ(arr,head,tail)
# pop_CQ(arr,head,tail)




#question in class 
#you are getting one by one character input from user (stream of characters) as soon as you recieve a char from user, tell the first non repeating character of the stream till now


n=int(input())

arr = [-1]*n
head = [0]
tail = [len(arr)-1]

for i in range(n):
    k=input()
    if arr[head[0]]==k:
        pop_CQ(arr,head,tail)
        print(arr[head[0]])

    else:
        push_CQ(arr,head,tail,k)
        print(arr[head[0]])



# Problem solving 
#question in class
def largestarea(n,arr):
    st = []
    max_area = -1
    for i in range(n):
        while len(st)>1 and arr[i]<arr[st[-1]]:
            nextsmaller = i
            current = arr[st[-1]]
            st.pop()
            prevsmaller = st[-1]
            max_area = max((i-st[-1]-1)*current,max_area)
            # print(max_area,prevsmaller,current,nextsmaller)

        
        if len(st)==1 and arr[i]<arr[st[-1]]:
            nextsmaller = i
            prevsmaller = -1
            current = arr[st[-1]]
            st.pop()
            max_area = max(max_area,current*(i-prevsmaller-1))
            # print(max_area,prevsmaller,current,nextsmaller)  

            

        
        st.append(i)
        # print(st)
        # print('------------------------------')

    print(max_area)
# if we add a -1 in the input array at the last this is to ensure that the case of perfectly increasing array does not fail here
largestarea(7,[5,6,7,8,9,10,-1]) 

            



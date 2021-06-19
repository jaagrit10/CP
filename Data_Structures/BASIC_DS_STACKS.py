 class Stack:
	__arr = []
	__top = -1

	def __init__(self, n):
		self.__arr = [0]*n

	def push(self, element):
		if self.__top >= len(self.__arr) - 1:
			print("Overflow error, No more space in the stack")
			return
		self.__top += 1
		self.__arr[self.__top] = element

	def pop(self):
		if self.__top < 0:
			print("Underflow error, Stack is empty")
			return
		temp = self.__arr[self.__top]
		self.__top -= 1
		return temp


	def peek(self):
		if self.__top < 0:
			print("Underflow error, Stack is empty")
			return
		return self.__arr[self.__top]

	def length1(self):
		return self.__top


def insert_at_bottom(st,x):
	
	if st.length1()==-1:
		st.push(x)
		
		return

	# print(st.length1())
	temp=st.pop()
	insert_at_bottom(st,x)
	# print(st.peek())
	st.push(temp)
	


def sort_st(st,k):
	
	if st.length1()==-1 or k>st.peek():
		st.push(k)
		return

	temp=st.pop()
	sort_st(st,k)
	st.push(temp)



def sorted(st):
	if st.length1()!=-1:
		k=st.pop()
		sorted(st)
		sort_st(st,k)

# QUESTION SOLVING

#BALANCED PARENTHESIS QUESTION
  
def isBalanced(str):
	mapping = {")": "(", "]": "[", "}": "{"}
	stack = []
	for ch in str:
		if ch in mapping:
			# means we have a closing char
			if len(stack) == 0:
				return False
			top = stack.pop() 
			if mapping[ch] != top:
				return False
		else:
			# means we have an opening char
			stack.append(ch)

	return len(stack) == 0

s = input()
print(isBalanced(s))

#NEXT GREATER USING STACK

def nextgreater(n,arr):
	st=[]
	ans=[-1]*n
	for i in range(n):
		while len(st)!=0 and arr[i]>arr[st[-1]]:
			z = st[-1]
			st.pop()
			ans[st[-1]]=arr[i]


		st.append(i)

	return ans

#stock span problem
def stockspan(n,arr):
    ans=[1]*n
    st=[]
    for i in range(n-1,-1,-1):
        while len(st)!=0 and arr[st[-1]]>arr[i]:
            op=st[-1]
            st.pop()

        if len(st)!=0:
            ans[i]=st[-1]-i

        else:
            ans[i]=n-i


        st.append(i)


    return sum(ans)


#question of getting a min O(1) time
def getmin(arr):
	st=[arr[0]]
	min=arr[0]


	for i in range(1,len(arr)):
		if arr[i]<min:
			pointer = 2*arr[i] - min
			min = arr[i]
			st.append(pointer)

		else:
			st.append(arr[i])


	# print(st,min)



	if st[-1]<min:
		op = arr[-1]

		return 2*op - min


	else:
		return min










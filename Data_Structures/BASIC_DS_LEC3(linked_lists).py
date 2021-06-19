class node:
	data=-1
	next = None

	def __init__(self,data):
		self.data=data



def insert_at_head(head,data):
	if head==None:
		return node(data)

	new_node=node(data)
	node(data).next=head
	head=new_node

	return head

def insert_at_tail(head,data):
	if head==None:
		return node(data)

	temp=head
	while temp.next!=None:
		temp=temp.next

	new_node=node(data)
	temp.next=new_node
	return head

def display_LL(head):
	temp=head
	while temp!=None:
		print(temp.data,end="->")
		temp=temp.next



	return

def insert_at(head, data, pos=0):
	if pos==0:
		return insert_at_head(head,data)

	if pos>=n:
		return insert_at_tail(head,data)
	temp=head
	while pos!=1:
		pos-=1
		temp=temp.next

	new_node=node(data)

	new_node.next=temp.next
	temp.next=new_node
	return head

	temp=head
	if temp.next!=None:
		new_node=node(data)
		temp.next=new_node
		return head


def palindromiclist(head,z,k):
	if head==None:
		# l=node(data)
		# z+=str(l)
		# k+=str(l)
		return node(data)




	k+=str(head.data)
	y=palindromiclist(head.next,z,k)
	z+=str(y.data)
	return y








def insert_at_head(head,data):
	if head==None:
		return node(data)

	new_node=node(data)
	node(data).next=head
	head=new_node

	return head

def insert_at_tail(head,data):
	if head==None:
		return node(data)

	temp=head
	while temp.next!=None:
		temp=temp.next

	new_node=node(data)
	temp.next=new_node
	return head



def floyd_cycle(head,slow,fast):
	while slow!=None and fast!=None and fast.next!=None:
		slow=slow.next
		fast=fast.next.next
		if slow!=None and slow==fast:
			new_slow=fast
			slow=head
			while slow!=None and new_slow!=None:
				slow=slow.next
				new_slow=new_slow.next

				if slow==new_slow:
					return slow.data


	return "NOT A LOOP"


# def invert_list(head,temp):
# 	if head.next==None:
# 		# new=None
# 		# new=head.next.next
# 		temp=head
# 		# head.next.next=head
# 		return head


# 	y=invert_list(head.next,temp)
# 	head.next.next=head
# 	head.next=None
# 	return y


def transform(head):
	x=head
	while x!=None and x.next.next!=None:

		temp=x
		while temp.next.next!=None:
			temp=temp.next

		temp.next.next=x.next
		x.next=temp.next
		temp.next=None

		x=x.next.next

	return head


def fold_helper(left,right):
	if right==None:
		return left

	left=fold_helper(left,right.next)

	if left==None:
		return left

	# if left.next.next==None:
	# 	return left

	if left!=right and left.next!=right:
		temp1=left.next
		left.next=right
		right.next=temp1
		left=temp1

	else:
		right.next=None
		left=None

	return left


def fold(head):
	fold_helper(head,head)
	return head


	








n=int(input())
head=None
for i in range(n):
	x=int(input())
	head=insert_at_tail(head,x)

# print(head)

# temp=None

# head.next.next.next.next.next=head.next.next
# print(floyd_cycle(head,head,head))
# head1=invert_list(head,temp)
head=fold(head)

display_LL(head)



# insert_at(head,93,2)


# display_LL(head)

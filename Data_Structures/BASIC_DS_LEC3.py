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



def delete_at_head(head,data):
	if head==None:
		return None

	temp=head
	head=temp.next
	temp.next=head
	return head


# def delete_at_tail(head,data):










n=int(input())
head=None
for i in range(n):
	x=int(input())
	head=insert_at_tail(head,x)



# display_LL(head)

head=delete_at_head(head,3)
display_LL(head)

# question

def add(head,data):
	if head==None:
		return node(data)

		
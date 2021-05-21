import sys

def get_inpt(): return sys.stdin.readline().strip()
def get_int(): return int(sys.stdin.readline().strip())
def get_ints(): return map(int, sys.stdin.readline().strip().split())
def get_array(): return list(map(sys.stdin.readline().strip().split()))

def p_str(x): sys.stdout.write(x+"\n")
def p_int(x): sys.stdout.write(str(x) + "\n")
def p_arr(arr): sys.stdout.write(" ".join(map(str, arr)) + "\n")

def wino(board):
	gameo=0
	
	

	for rows in range(3):
		if (board[rows][0]=='O' and board[rows][1]=='O' and board[rows][2]=='O'):
			gameo+=1

	if gameo==0:

		for columns in range(3):
			if (board[0][columns]=='O' and board[1][columns]=='O' and board[2][columns]=='O'):
				gameo+=1

	if gameo==0:


		if (board[0][0]=='O' and board[1][1]=='O' and board[2][2]=='O'):
			gameo+=1

	if gameo==0:

		if (board[0][2]=='O' and board[1][1]=='O' and board[2][0]=='O'):
			gameo+=1


	return gameo


def winx(board):
	rows=0
	columns=0
	gamex=0


	for rows in range(3):
		if (board[rows][0]=='X' and board[rows][1]=='X' and board[rows][2]=='X'):
			gamex+=1

	if gamex==0:

		for columns in range(3):
			if (board[0][columns]=='X' and board[1][columns]=='X' and board[2][columns]=='X'):
				gamex+=1

	if gamex==0:


		if  (board[0][0]=='X' and board[1][1]=='X' and board[2][2]=='X'):
			gamex+=1

	if gamex==0:

		if (board[0][2]=='X' and board[1][1]=='X' and board[2][0]=='X'):
			gamex+=1


	return gamex


def win(board):
	gameo=0
	gamex=0

	for rows in range(3):
		if (board[rows][0]=='O' and board[rows][1]=='O' and board[rows][2]=='O'):
			gameo+=1

	if gameo==0:

		for columns in range(3):
			if (board[0][columns]=='O' and board[1][columns]=='O' and board[2][columns]=='O'):
				gameo+=1

	if gameo==0:


		if (board[0][0]=='O' and board[1][1]=='O' and board[2][2]=='O'):
			gameo+=1

	if gameo==0:

		if (board[0][2]=='O' and board[1][1]=='O' and board[2][0]=='O'):
			gameo+=1








	rows=0
	columns=0


	for rows in range(3):
		if (board[rows][0]=='X' and board[rows][1]=='X' and board[rows][2]=='X'):
			gamex+=1

	if gamex==0:

		for columns in range(3):
			if (board[0][columns]=='X' and board[1][columns]=='X' and board[2][columns]=='X'):
				gamex+=1

	if gamex==0:


		if  (board[0][0]=='X' and board[1][1]=='X' and board[2][2]=='X'):
			gamex+=1

	if gamex==0:

		if (board[0][2]=='X' and board[1][1]=='X' and board[2][0]=='X'):
			gamex+=1



	game=gamex+gameo
	return game

def notreacheable(board):
	
	
	o=0
	x=0

	for i in range(3):
		for j in range(3):
			if board[i][j]=='O':
				o+=1
			elif board[i][j]=='X':
				x+=1

	if (x-o)>1 or (x-o)<0:

		return True

	

	w=win(board)

	under=0
	for ro in range(3):
		for co in range(3):
			if board[ro][co]=="_":
				under+=1

	if under%2==0 and (x-o)!=1 and under!=0 and w==0:
		return True

	elif under%2!=0 and (x-o)!=0 and under!=0 and w==0:
		return True

	elif wino(board)==1 and winx(board)==0:
		if under%2!=0:
			if (x-o)==1:
				return True

		elif under%2==0 and under!=0:
			if (x-o)==1:
				return True


	elif wino(board)==0 and winx(board)==1:
		if under%2!=0:
			if (x-o)==0:
				return True

		elif under%2==0 and under!=0:
			if (x-o)==0:
				return True


	w=win(board)
	if w>1:
		return True

	if winx(board)==1 and wino(board)!=1 and o==x:
		return True

	if wino(board)==1 and winx(board)!=1 and x>o:
		return True


	return False




def reachable_case1(board):
	g=win(board)
	u=0

	for r in range(3):
		for c in range(3):
			if board[r][c]=="_":
				u+=1
	
	if g==0 and u==0:
		return True

	elif g==0 and u!=0:
		return False

	elif g!=0:
		return True




for _ in range(get_int()):
	board=[]
	for i in range(3):
		x=get_inpt()
		x=list(x)
		board.append(x)

	

	if notreacheable(board):
		print(3)

	elif reachable_case1(board):
		print(1)

	else:
		print(2)
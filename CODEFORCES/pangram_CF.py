# https://codeforces.com/contest/520/problem/A
import string

uppercase=list(string.ascii_uppercase)
lowercase=list(string.ascii_lowercase)
def pangram(k):
    if len(k)<26:
        return "NO"
    final=str()
    freq={}
    for i in k:
        
        if i in uppercase:
            add=uppercase.index(i)
            if freq.get(lowercase[add])==None:
                final+=lowercase[add]
                freq[lowercase[add]]=1

        elif i in lowercase:
            if freq.get(i)==None:
                final+=i
                freq[i]=1

    key=freq.keys()
    for j in lowercase:
        if freq.get(j)==None:
            return "NO"

    return "YES"



n=int(input())
k=input()
print(pangram(k))

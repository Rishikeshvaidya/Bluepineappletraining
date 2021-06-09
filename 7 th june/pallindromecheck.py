
def pallindromecheck(s):
    l=len(s)
    if l==0 or l==1:
        return True
    else:
        for i in range(0,l//2):
            if s[i]!=s[l-1-i]:
                return False
        return True
            

s=input()
k=s.lower()

x=pallindromecheck(k)
if x==True:
    print("pallindrome")
else:
    print("Not pallindrome")


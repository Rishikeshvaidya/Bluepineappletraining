import re
def patternmatching(s,p):
  
    if '?' in p:
        p=p.replace('?','.')
        ans=re.findall(p,s)
        return ans
    elif '*' in p:
        i=p.find('*')
        if p[:i] in s:
            return s[s.find(p[:i]):]
    else:
        return "Enter pattern"
    


s=input("\n Enter a String:")
p=input("\n Enter a pattern:")

print(patternmatching(s,p))



# output:

# C:\Users\Amin\Desktop>python patternmatching.py

#  Enter a String:acde

#  Enter a pattern:abc
# Enter pattern

# C:\Users\Amin\Desktop>python patternmatching.py

#  Enter a String:abcpaqc

#  Enter a pattern:a?c
# ['abc', 'aqc']

# C:\Users\Amin\Desktop>python patternmatching.py

#  Enter a String:1234abcpaqc

#  Enter a pattern:a*
# abcpaqc

# C:\Users\Amin\Desktop>python patternmatching.py

#  Enter a String:acde

#  Enter a pattern:abc
# Enter pattern

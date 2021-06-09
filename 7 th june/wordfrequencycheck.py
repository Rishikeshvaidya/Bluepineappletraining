def wordfrequencycheck(str):
    str=str.lower()
    frequency={}
    l=str.split()
    for i in l:
        if i[-1]=='.' or i[-1]==',':
            i=i[0:-1]
        if i in frequency.keys():
            frequency[i]=frequency[i]+1
        else:
            frequency[i]=1
    return frequency




print("Enter a string :")
str=input()
frequency=wordfrequencycheck(str)
for key,value in frequency.items():
    print(key,":",value)

# output

# C:\Users\Amin\Desktop\bluepineapple company\bluepineapple programs\7th june>python wordfrequencycheck.py
# Enter a string :
# where Word is a string in the passage, and count is an integer representing number of times the Word has appeared in the passage.
# where : 1
# word : 2
# is : 2
# a : 1
# string : 1
# in : 2
# the : 3
# passage : 2
# and : 1
# count : 1
# an : 1
# integer : 1
# representing : 1
# number : 1
# of : 1
# times : 1
# has : 1
# appeared : 1

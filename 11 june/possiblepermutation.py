print("Enter the numbers")
a = list(map(int,input().split())) #Enter space separated value
def permutation(start, end):
    if end==start:
        print(a)
        return
    for i in range(start, end+1):
        a[i],a[start] = a[start],a[i]   #swapping
        permutation(start+1, end) #calling permutation function by keeping the element at the index start fixed
        a[i],a[start] = a[start],a[i]  #restoring the array


permutation(0,len(a)-1)

output:



# C:\Users\Amin\Desktop\bluepineapple company\bluepineapple programs\11 june>python possiblepermutation.py
# Enter the numbers
# 1 2 3 4
# [1, 2, 3, 4]
# [1, 2, 4, 3]
# [1, 3, 2, 4]
# [1, 3, 4, 2]
# [1, 4, 3, 2]
# [1, 4, 2, 3]
# [2, 1, 3, 4]
# [2, 1, 4, 3]
# [2, 3, 1, 4]
# [2, 3, 4, 1]
# [2, 4, 3, 1]
# [2, 4, 1, 3]
# [3, 2, 1, 4]
# [3, 2, 4, 1]
# [3, 1, 2, 4]
# [3, 1, 4, 2]
# [3, 4, 1, 2]
# [3, 4, 2, 1]
# [4, 2, 3, 1]
# [4, 2, 1, 3]
# [4, 3, 2, 1]
# [4, 3, 1, 2]
# [4, 1, 3, 2]
# [4, 1, 2, 3]
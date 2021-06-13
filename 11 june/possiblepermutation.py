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


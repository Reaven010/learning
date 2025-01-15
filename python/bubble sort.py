def bubble_sort(l):
    p=0
    n=len(l)
    for j in range (0,n):
        for i in range(0,n-1):
            if l[i]>l[i+1]:
                l[i],l[i+1]=l[i+1],l[i]
        p+=1
    print(p)
l=list(map(int,input('enter a list').split()))
bubble_sort(l)
print(l)

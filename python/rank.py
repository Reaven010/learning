def compare(n,k,ar):
    count=0
    for i in range (0,n):
        for j in range (0,n):
            if i<j :
                
                if (ar[i]+ar[j])%k==0:
                    count+=1
    return count
n=6
k=3
ar=[]
def is_prime(n):
    for i in range(2,int((n**0.5)+1)):
        if n%i==0:
            return False
    return True


n=int(input("enter a number: "))
count=0
i=2

while count<n:
    if is_prime(i):
        print(i)
        i+=1
        count+=1
    else:
        i+=1
 
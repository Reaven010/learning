def square(n):
    for i in range (n):
        for j in range( n):
            print("*",end="")
        print()
def inst(n):
    for i in range (n):
        for j in range(i+1):
            print("*",end="")
        print()
def dect(n):
    for i in range (n):
        for j in range(n-i):
            print("*",end="")
        print()
n=5
for i in range(n):
    for j in range(i,n):
        print(" ",end="")
    for j in range(i):
        print(i,end="")
    for j in range (i+1):
        print(i,end="")
            
    print()

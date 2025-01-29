"""file
r - open file to read
w - open filefor writing
x- create file if not exist
a - append add  more content to existing file
t - text mode
v- binary mode
+ - read and write 
"""
import csv
import pickle
#to read given file
def reading(t,s):
    if s=="b":
        with open(t, 'rb') as f:
            f.seek(0)
            loaded_data = pickle.load(f)
            print(loaded_data)
    else:
        with open(t,"r") as f:
            for i in f:
                print(i,end="")
    
#to append more data
def adding(t,s):
    if s=='b':
        with open(t,"wb") as f:
            n=int(input ("enter number of lines to be added \n"))
            for i in range (0,n):
                content=input("enter want you want to add ")+"\n"
                pickle.dump(content,f)
    else:
        with open(t,"a") as f:
            n=int(input ("enter number of lines to be added \n"))
            for i in range (0,n):
                content=input("enter want you want to add ")
                f.write(content+"\n")
def ifbin(t):
    p=t[-3:]
    if p== "bin" or p=="pkl":
        return "b"
    else :
        return ""
print("file read and write ")
print("1. for reading file")
print("2. for adding content in file")
print("3. for changing file you working on")
print("4. to create a new file ")
t=input("enter file name \n")

s=ifbin(t)
while True :
    ch=input("\nenter your choice \n")
    if ch=="1":
        reading(t,s)
    elif ch=="2":
        adding(t,s)
    elif ch == "3":
        t=input("enter file name \n")
        s=ifbin(t)
    print("-"*30)
    p=input("\ndo you want to change more\n")
    
    if p=="n"or p=="no":
        break



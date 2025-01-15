print("welcome to calculator")
print("menu")
print("+ for addition")
print("- for substraction")
print("* for multiply")
print("/ for devide")
t="y"
try:
    while t== "y" or t== "yes":
        opperator=input("enter operator \n")
        a=int(input("enter first number \n"))
        b=int(input("enter second number \n"))
        if opperator == "+":
            print(a,"+",b,"=",a+b)
        elif opperator == "-":
            print(a,"-",b,"=",a-b)
        elif opperator == "*":
            print(a,"*",b,"=",a*b)
        elif opperator == "/":
            print(a,"/",b,"=",a/b)
        t=input("do you want to continue")
except Exception as e :
    print(e)
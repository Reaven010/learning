import random
print('welcome to rock paper scisors')
print('please enter value as dedicated ')
l=['rock','paper','scisors']
lcount=0
wcount=0
p='y'
while p=='y':
    x=input('enter your choice   -    ')
    r=random.randint(0,2)
    c=l[r]
    if c=='rock' and x=="paper":
        print("congrats you win opponent chose   -  ",end=" ")
        wcount+=1
        print(c)
    elif c=='paper' and x=='scisors':
        print("congrats you win opponent chose   -  ",end=" ")
        wcount+=1
        print(c)
    elif c=='scisors' and x=='rock':
        print("congrats you win opponent chose    -  ",end=" ")
        wcount+=1
        print(c) 
    elif c==x :
        print('its a draw')
    else:
        print("you lose opponent chose    -  ",end=" ")
        print(c)
    lcount+=1
    print('win ratio = ',wcount/lcount)
    p=input("do you want to continue   -    ")
    
    if p=='y' or p=='Y':
        continue
    else:
        break
    

days={'0':"monday",'1':"tuesday",'2':"wednesday",'3':"thursday",'4':"friday",'5':"saturday",'6':"sunday"}
print("enter date with / as separator")
day=input()
day=day.split("/")
k=int(day[0])
m=int(day[1])
d=int(day[2][-2:])
c=int(day[2][0:2])
F=k + int((13*m + 1)/5) + d + int(d/4) + int(c/4) - 2*c
r=str(int(F % 7))
print(days[r])
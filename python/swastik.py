import matplotlib.pyplot as plt
# l1
xi=[1,2,3,4,5,6,7,8,9]
yi=[5,5,5,5,5,5,5,5,5]
# l2
yh=[1,2,3,4,5,6,7,8,9]
xh=[5,5,5,5,5,5,5,5,5]
# l3 upper
xu=[1,2,3,4,5]
yu=[9,9,9,9,9]
# l4 lower
xl=[5,6,7,8,9]
yl=[1,1,1,1,1]

# l5 verticle line 1
xv1=[1,1,1,1,1]
yv1=[5,4,3,2,1]
# l6 verticle line 2
xv2=[9,9,9,9,9]
yv2=[5,6,7,8,9]


# plotting the lines
plt.plot(xi,yi)
plt.plot(xh,yh)
plt.plot(xu,yu)
plt.plot(xl,yl)
plt.plot(xv1,yv1)
plt.plot(xv2,yv2)
plt.show()
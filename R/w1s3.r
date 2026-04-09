#Starting of Session 3
a=1:10
b=seq(2,10,length.out = 10)
c=c(rep("sachin",5),rep("sourav",5))

#Create a matrix
matrix1=cbind(a,b,c)
matrix2=rbind(a,b,c)

#Other matrix
matrix3=matrix(c(1:9),nrow=3,byrow = TRUE)

#Create a dataframe
data1=data.frame(a=a,b=b,c=c)


#Subset a matrix and a data frame

#Plot from dataframe
plot(data1$a)
#write a data frame
write.csv(data1,"data1.csv",row.names=FALSE)
#Read a dataframe
data1=read.csv("data1.csv")
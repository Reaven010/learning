# include<iostream>
//operators in c++

using namespace std;

int main(){
    //arithmetic operators
    int num1=4,num2=5;
    cout<<"followin are the operrators in c++\n";
    cout<<"sum of num 1 and num 2 is "<<num1+num2;
    cout<<"\nsubstraction of num 1 and num 2 is "<<num1-num2;
    cout<<"\nmultiplication of num 1 and num 2 is "<<num1*num2;
    cout<<"\ndivision of num 1 and num 2 is "<<num1/num2;
    cout<<"\nremainder of num 1 and num 2 is "<<num1%num2;
    cout<<"\ndivision of num 1 and num 2 is "<<num1/num2;
    cout<<"\nincrease value then print "<<num2++;
    cout<<"\nprint then increase value "<<++num2;
    cout<<"\ndecrease value then print "<<num2--;
    cout<<"\nprint then decrease value "<<--num2;
    //endl is used to print the output in new line 
    cout<<endl;
    //assignment operators
    int a=3;
    a+=3;
    cout<<a;
    cout<<endl;
    //comparison operators
    cout<<"the value of a==b is "<<(a==num1)<<endl;
    cout<<"the value of a!=b is "<<(a!=num1)<<endl;
    cout<<"the value of a>b is "<<(a>num1)<<endl;
    cout<<"the value of a<b is "<<(a<num1)<<endl;
    cout<<"the value of a>=b is "<<(a>=num1)<<endl;
    cout<<"the value of a<=b is "<<(a<=num1)<<endl;
    //logical operators
    cout<<"the value of logical and operator is "<<((a==num1)&&(a<num1))<<endl;
    cout<<"the value of logical or operator is "<<((a==num1)||(a<num1))<<endl;
    cout<<"the value of logical not operator is "<<(!(a==num1))<<endl;
    
    return 0;
}
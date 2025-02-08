#include<iostream>
using namespace std;
/*
inharitence:
student  -->test
student --->sports
test-->result
sports -->result
*/
class student{
    protected:
        int rollno ;
    public:
        void set_rollnumber(int a){
            rollno=a;
        }
        void print_number(){
            cout<<"your roll number is "<<rollno<<endl;
        }
};

class test : virtual public student{
    protected:
        float maths,physics;
    public:
        void setmarks(float m1,float m2){
            maths = m1;
            physics= m2;
        }
        void print_marks(void){
            cout<<"you obtained "<<endl
                <<"maths "<<maths<<endl
                <<"physics "<<physics<<endl;
        }
};
class sports: virtual public student{
    protected:
        float score;
    public:
        void set_score(float sc){
            score =sc;
        }
        void print_score(){
            cout<<"your pt score is "<<score<<endl;
        }

};
class result : public test,public sports{
    private:
        float total;
    public:
        void display(){
            total = maths + physics+score;
            print_number();
            print_marks();
            print_score();
            cout <<"total marks is "<<total<<endl;
        }
};
int main(){
    result sayujya;
    sayujya.set_rollnumber(1020);
    sayujya.setmarks(80,93);
    sayujya.set_score(90);
    sayujya.display();
    
    return 0;
}
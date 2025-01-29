#include<iostream>
using namespace std;

class college {
    private:
        void get(){
            cout <<"enter a marks"<<endl;
            cin>>mark;
        }
        int mark;
    public:
        void disp();
        college(int mark){
            this ->mark= mark;
        }
};
void college :: disp(){
        
        cout<<"marks obtained "<<mark<<endl;
}
int main(){
    college stu1(50);
    stu1.disp();
    return 0;
}
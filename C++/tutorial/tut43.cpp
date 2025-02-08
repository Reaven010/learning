#include<iostream>
using namespace std;
class base1{
    public :
    void greet()
    {
        cout<<"how are you?"<<endl;
    }
};
class base2{
    public :
    void greet()
    {
        cout<<"kaise ho"<<endl;
    }
};
class derived : public base1,public base2{
    int a;
    public:
        void greet(){
            base2 :: greet();
        }
};
class b{
    public:
        void say(){
            cout<<"hello world"<<endl;
        }
};

class d :public b{
    public:
        void say(){
            cout<<"hello my friends"<<endl;
        }
};

int main(){
    //ambiguity 1
    derived a;
    a.greet();
    //mbiguity 2
    b p;
    d c;
    c.say();
    p.say();
    
}
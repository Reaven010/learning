#include <iostream>
#include <algorithm>
#include<climits>
using namespace std;

class queue{
    int *arr;
    int front,rear;
    int size;
    public:
        queue(int n){
            arr=new int[n];
            front=-1,rear=-1;
            this->size=n;
        }

        bool isfull(){
            return rear==size-1;
        }

        bool isempty(){
            return front==-1;
        }

        void push (int x){
            if(isfull()){
                cout<<"Queue overflow"<<endl;
                return ;
            }
            else if(isempty()){
                front =0,rear=0;
                arr[rear]=x;
            }
            else{
                rear++;
                arr[rear]=x;
            }
        }

        void pop(){
            if(isempty()){
                cout<<"cout underflow"<<endl;
            }
            else{
                if(front==rear){
                    front=-1,rear=-1;
                }
                else{
                    front=front+1;
                }
            }
        }
        int start(){
            if(isempty()){
                cout<<"Queue is empty"<<endl;
                return -1;
            }
            else{
            return arr[front];
            }
        }
};

int main() {
    queue q(5);
    q.push(10);
    q.push(20);
    q.push(30);
    cout<<q.start()<<endl;
    q.pop();
    cout<<q.start()<<endl;
    cout<<"is queue empty " <<boolalpha<<q.isempty()<<endl;
}
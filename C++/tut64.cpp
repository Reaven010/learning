#include<iostream>
using namespace std;
template<class t>
class vector{
    public:
    t *arr;
    int size;
        vector(t m){
            size =m;
            arr = new t[size];
        }
        t dotproduct( vector &v){
            t d =0;
            for (int i =0;i<size;i++){
                d +=this->arr[i]* v.arr[i] ;
            }
            return d;
        }
};
int main(){
//int value
    // vector v1(3);
    // v1.arr[0] =4;
    // v1.arr[1] =11;
    // v1.arr[2] =30;
    // vector v2(3);
    // v2.arr[0] =1;
    // v2.arr[1] =0;
    // v2.arr[2] =1;
    // int a=v1.dotproduct(v2);
    // cout<<a<<endl;

    vector<float>v1(3);
    v1.arr[0] =4.1;
    v1.arr[1] =11.2;
    v1.arr[2] =30.5;
    vector<float>v2(3);
    v2.arr[0] =1.9;
    v2.arr[1] =0;
    v2.arr[2] =1.3;
    cout<<v1.dotproduct(v2)<<endl;
    
    return 0;
}
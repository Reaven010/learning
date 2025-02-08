#include<iostream>
#include<vector>
using namespace std;
//.at will also access element .erase ewill delete elements 
//for futhor commands and examples visit https://cplusplus.com/reference/vector/vector/#google_vignette
template <class t>
void display(vector<t> &v){
    cout<<"displaying vector";
    for (int i =0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout <<endl;
}
int main(){
    //to create a vector
    int size;
    cout<<"enter size of vector"<<endl;
    cin>>size;
    vector<int>vec1;//zero length vector
    int element;
    for (int i=0;i<size;i++){
        cout<<"enter the element to add to this vector"<<endl;
        cin>>element;
        vec1.push_back(element);
    }
    display(vec1);
    vec1.pop_back();
    display(vec1);
    vector<int>:: iterator iter =vec1.begin();
    vec1.insert(iter+1,5,566);//vec1.insert(iterator,no. of copies,element)
    display(vec1);
    vector<int> vec2(4);//4 element vector
    vector<int> vec3(vec2);//4 element vector from vec2
    vector<int> vec4(6,13);//6 element vector of 3s
    display(vec1);
    vec2.push_back(5);
    display(vec2);
    display(vec3);
    display(vec4);
    return 0;
}
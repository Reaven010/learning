#include<iostream>
#include <list>
//for more regarding list visit cpp.com
using namespace std;
void display(list<int>&lst){
    list<int>::iterator iter;
    for (iter = lst.begin();iter !=lst.end();iter++){
        cout<<*iter<<" ";
    }
    cout<<endl;
}
int main(){
    list<int>list1;//list of 0 length
    list<int>list2(5);//empty list of size 7
    list1.push_back(1);
    list1.push_back(2);
    list1.push_back(3);
    list1.push_back(4);
    list1.push_back(5);
    display(list1);
    //for list 2
    list<int>::iterator iter;
    iter=list2.begin();
    for (int  i =1;i<5;i++){
        *iter = i;
        iter++;
    }
    display(list2);
    //removing elements from list1
    //pop_front() ,pop_back , remove
    // list1.pop_front();
    // display(list1);
    // list1.pop_back();
    // display(list1);
    // list1.remove(3);
    // display(list1);

    // sorting list 
    // list1.sort();

    //reversing list
    list1.reverse();
    display(list1);


    //merging list
    list1.merge(list2);
    cout<<"lisdt 1 after merging"<<endl;
    display(list1);
    return 0;
}
#include<iostream>
#include<map>
#include<string>
using namespace std;
//map is an aSSOCIATIVE ARRAY
int main(){
    map<string,int>marksmap;
    marksmap["sayujya"]= 98;
    marksmap ["rohan"] = 60;
    marksmap ["sagar"] = 82;
    marksmap.insert({{"jack",187},{"connor",98}});
    map<string,int>:: iterator iter;
    for (iter=marksmap.begin();iter!=marksmap.end();iter++){
        cout<<(*iter).first<<" "<<(*iter).second<<endl;
    }
    cout<<"the size  of  map is "<<marksmap.size()<<endl;
    cout<<"the size  of max map is "<<marksmap.max_size()<<endl;
    cout<<"empty's return value "<<marksmap.empty()<<endl;


    return 0;
}
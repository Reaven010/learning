#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter number of rows "<<endl;
    cin>>n;
    cout <<"complete triangle "<<endl;
    for (int row =1;row<=n;row++){
        for (int space=0;space<=n-row;space++){
            cout<<" ";
        }
        for (int star1 =0;star1<row;star1++){
            cout<<"*";
        }
        for (int star2=0;star2<row-1;star2++){
            cout<<"*";
        }
        for(int space2 =0;space2<=n-row;space2++){
            cout<<" ";
        }
        cout<<endl;
    }
    for (int row =1;row<=n;row++){
        for (int space=0;space<=n-row;space++){
            cout<<" ";
        }
        for (int star1 =0;star1<row;star1++){
            cout<<star1+1;
        }
        for (int star2=0;star2<row-1;star2++){
            cout<<star2+1;
        }
        for(int space2 =0;space2<=n-row;space2++){
            cout<<" ";
        }
        cout<<endl;
    }
/*
row                 print*                      print" "(row -1)
1                   9                               0
2                   7                               1
3                   5                               2
4                   3                               3
*/
    cout<<"inverse triangle"<<endl;
    for (int row =0;row<n;row++){
        for (int space=0;space<row;space++){
            cout<<" ";
        }
        for (int star1=0;star1<n-row;star1++){
            cout<<"*";
        }
        for (int star2=0;star2<n-row-1;star2++){
            cout <<"*";
        }
        cout<<endl;
    }

    cout <<"square of space surrounded with*"<<endl;
    /*
    using decreasing loop
    upper part
            row                 star(row)                   space(2n-2row)
            4                   4,4                           0
            3                   3,3                           2
            2                   2,2                           4
            1                   1,1                           6
    */
    for (int row =n;row>0;row--){
        for (int star =row;star>0;star--){
            cout<<"*";
        }
        for (int space =0;space<2*(n-row);space++){
            cout<<" ";
        }
        for (int star =row;star>0;star--){
            cout<<"*";
        }
        cout<<endl;
    }
    /*
    lower part
            row                 star(row)                   space(2n-2row)
            1                   1,1                           6
            2                   2,2                           4
            3                   3,3                           2
            4                   4,4                           0
    */
    for (int row =1;row<=n;row++){
        for (int star =row;star>0;star--){
            cout<<"*";
        }
        for (int space =0;space<2*(n-row);space++){
            cout<<" ";
        }
        for (int star =row;star>0;star--){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<"another pattern"<<endl;
    /*
    row                 star(row)                   space(2n-2row)
    1                   1,1                           6
    2                   2,2                           4
    3                   3,3                           2
    4                   4,4                           0
    */
    for (int row =1;row<=n;row++){
        for (int star =row;star>0;star--){
            cout<<"*";
        }
        for (int space =0;space<2*(n-row);space++){
            cout<<" ";
        }
        for (int star =row;star>0;star--){
            cout<<"*";
        }
        cout<<endl;
    }
    /*
    using decreasing loop
    lower part
            row                 star(row)                   space(2n-2row)
            4                   4,4                           0
            3                   3,3                           2
            2                   2,2                           4
            1                   1,1                           6
    */
    for (int row =n-1;row>0;row--){
        for (int star =row;star>0;star--){
            cout<<"*";
        }
        for (int space =0;space<2*(n-row);space++){
            cout<<" ";
        }
        for (int star =row;star>0;star--){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<"diamond pattern with alternate * "<<endl;
    for (int row =1;row<=n;row++){
        for (int space =0;space<n-row;space++){
            cout<<" ";
        }
        for (int star =0;star<row-1;star++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for (int row=n;row >0;row--){
        for (int space =0;space<n-row;space++){
            cout<<" ";
        }
        for (int star =0;star<row-1;star++){
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}
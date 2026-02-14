#include<iostream>
using namespace std;
/*
                    star(row)                      row                    space(5-row)
                    1                               1                       4
                    2                               2                       3
                    3                               3                       2
                    4                               4                       1
                    5                               5                       0

*/
/*
                        algorithm to print this pattern
                        1. row =1 
                        2. row<=n
                        3. print space,n-row times
                        4. print star,row times
                        5,row+=1
*/
int main(){
    int n;
    cout<<"enter number of rows "<<endl;
    cin>>n;
    cout<<"this is inverse triangle"<<endl;
    for (int row =1;row<=n;row++){
        for (int space = 0;space<(n-row);space++){
            cout<<" ";
        }
        for (int star =0;star<row;star++){
            cout <<"*";
        }
        cout<<endl;
    }

    cout<<"this is inverse triangle with numbers"<<endl;
    for (int row =1;row<=n;row++){
        for (int space = 0;space<(n-row);space++){
            cout<<" ";
        }
        for (int star =0;star<row;star++){
            cout <<row;
        }
        cout<<endl;
    }

    cout<<"this is inverse triangle with increaseing numbers"<<endl;
    for (int row =1;row<=n;row++){
        for (int space = 0;space<(n-row);space++){
            cout<<" ";
        }
        for (int star =0;star<row;star++){
            cout <<star+1;
        }
        cout<<endl;
    }
    cout<<"this is inverse triangle with decreasing numbers"<<endl;
    for (int row =1;row<=n;row++){
        for (int space = 0;space<(n-row);space++){
            cout<<" ";
        }
        for (int star =0;star<row;star++){
            cout <<row-star;
        }
        cout<<endl;
    }

    cout<<"this is inverse triangle with increasing alphabet"<<endl;
    char c='a';
    for (int row =1;row<=n;row++){
        for (int space = 0;space<(n-row);space++){
            cout<<" ";
        }
        for (int star =0;star<row;star++){
            cout <<char(c+star);
        }
        cout<<endl;
    }
    cout<<"this is inverse triangle with continues increasing alphabets"<<endl;
    char ch='a';
    for (int row =1;row<=n;row++){
        for (int space = 0;space<(n-row);space++){
            cout<<" ";
        }
        for (int star =0;star<row;star++){
            cout <<ch;
            ch++;
        }
        cout<<endl;
    }
    cout <<"complete triangle "<<endl;\
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
    return 0;
}
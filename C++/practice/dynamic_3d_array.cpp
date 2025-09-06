#include <iostream>
#include <algorithm>
#include<climits>
using namespace std;

int main() {
    //creating array
    int l,b,h;
    //enter l b h
    cout<<"enter dimentions of 3d array"<<endl; 
    cin>>l>>b>>h;
    //initialisation
    int ***ptr=new int **[l];
    for (int i=0;i<l;i++){
        ptr[i]=new int *[b];
        for (int j=0;j<b;j++){
            ptr [i][j]=new int [h];
        }
    }
    //data insertion
    
    for (int i=0;i<l;i++){
        for (int j=0;j<b;j++){
            for(int k =0;k<h;k++){
                cin>>ptr[i][j][k];
            }
        }
    }

    //treversal

    for(int i =0;i<l;i++){
        for (int j=0;j<b;j++){
            for (int k=0;k<h;k++){
                cout<<ptr[i][j][k];
            }
        }
    }

    //delete 

    for(int i=0;i<l;i++){
        for (int j=0;j<b;j++){
            delete [] ptr[i][j];
        }
        delete [] ptr [i];
    }
    delete [] ptr;

}
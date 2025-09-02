#include <iostream>
#include<climits>
using namespace std;

int main() {
    int m,n;
    //m=coloms      n=rows
    cin>>n>>m;
    int **ptr=new int *[n];

//created 2d array
    for (int i=0;i<n;i++){
        ptr[i]=new int [m];
    }
//insertion of values
    cout<<"enter values for insertion : ";
    for(int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cin>>ptr [i][j];
        }
    }

//printing
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cout<<ptr[i][j]<<"\t";
        }
        cout<<endl;
    }
    //deleting array
    for (int i=0;i<n;i++){
        delete [] ptr [i];
    }
    delete []ptr;
}
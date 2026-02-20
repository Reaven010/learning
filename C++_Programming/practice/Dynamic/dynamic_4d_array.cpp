#include <iostream>
#include <algorithm>
#include<climits>
using namespace std;

int main() {
    int l,m,n,h;
    cout<<"enter dimentions of 4d array"<<endl;
    cin>>l>>m>>n>>h;

    //creation of 4d array
    int ****ptr=new int***[l];
    for (int i=0;i<l;i++){
        ptr[i]=new int**[m];
        for (int j=0;j<m;j++){
            ptr[i][j]=new int*[n];
            for (int k=0;k<n;k++){
                ptr[i][j][k]=new int [h];
            }
        }
    }

    //initialisation of 4d array
    for(int i=0;i<l;i++){
        for (int j=0;j<m;j++){
            for (int k=0;k<n;k++){
                for (int p=0;p<h;p++){
                    cin>>ptr[i][j][k][p];
                }
            }
        }
    }

    //deletion of 4d array

    for(int i=0;i<l;i++){
        for (int j=0;j<m;j++){
            for (int k=0;k<n;k++){
                delete[] ptr[i][j][k];
            }
            delete [] ptr[i][j];
        }
        delete [] ptr [i];
    }
    delete []ptr;
    return 0;
}
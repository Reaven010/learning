#include <iostream>
#include <algorithm>
#include<climits>
using namespace std;

int main() {

    string s;
    getline(cin,s);
    while(s.length()%3!=0){
        s+=" ";
    }
    int **matrix=new int* [3];
    for (int i=0;i<3;i++){
        matrix[i]=new int[3];
    }
    int arr[9]={1,2,1,0,1,3,0,0,1};
    int index=0;
    //dynamically made a 2d array for convinience
    while (index<9){
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                matrix[i][j]=arr[index];
                index++;
            }
        }
    }
    

    // //to check matrix
    // for (int i=0;i<3;i++){
    //     for (int j=0;j<3;j++){
    //         cout<<matrix[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    int n=s.length();
    int ans[n];
    int i=0;
    while(i<=n-3){
        int a0=s[i];
        int a1=s[i+1];
        int a2=s[i+2];
        ans[i]=a0*matrix[0][0]+a1*matrix[1][0]+a2*matrix[2][0];
        ans[i+1]=a0*matrix[0][1]+a1*matrix[1][1]+a2*matrix[2][1];
        ans[i+2]=a0*matrix[0][2]+a1*matrix[1][2]+a2*matrix[2][2];
        i++;

    }

    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;

    //------------------------
    int invarr[]={1,-2,5,0,1,-3,0,0,1};
    int index1=0;
    
    //dynamically made a 2d array for convinience
    while (index1<9){
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                matrix[i][j]=invarr[index1];
                index1++;
            }
        }
    }
    string answer;
    i=0;
        while(i<=n-3){
        int a0=s[i];
        int a1=s[i+1];
        int a2=s[i+2];
        ans[i]=a0*matrix[0][0]+a1*matrix[1][0]+a2*matrix[2][0];
        ans[i+1]=a0*matrix[0][1]+a1*matrix[1][1]+a2*matrix[2][1];
        ans[i+2]=a0*matrix[0][2]+a1*matrix[1][2]+a2*matrix[2][2];
        i++;

    }
    for (char a:ans){
        answer+=a;
    }
    cout<<answer;
    return 0;
}

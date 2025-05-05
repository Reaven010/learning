#include<iostream>
#include<algorithm>
#include<climits>
#include<vector>

using namespace std;

int main(){
    
    //creating 2d vctor
    int n,m;
    cout<<"enter number of rows and coloums  "<<endl;
    cin>>n>>m;
    vector<vector<int> >matrix(n,vector<int>(m,0));

    //storing values

    for(int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cin>>matrix[i][j];
        }
    }

    //printing values

    for(int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cout<<matrix[i][j]<<"   ";
        }
        cout<<endl;
    }

    // for (int i=0;i<n;i++){
    //     for (int j=0;j<m;j++){
    //         cout<<matrix[i][j]<<"   ";
    //     }
    //     cout<<endl;
    // }

    // //to get no. of rows and coloum in the matrix
    // cout<<"rows in the matrix   "<<matrix.size()<<endl;
    // cout<<"coloum in the matrix "<<matrix[0].size()<<endl;
    
    //waveform printing
    cout<<"waveform printing "<<endl;
    for (int i=0;i<n;i++){
        if ( i %2==0){
            for (int j=0;j<m;j++){
                cout<<matrix[i][j]<<" ";
            }
        
        }
        else{
            for (int j=m-1;j>=0;j--){
                cout<<matrix[i][j]<<"   ";
            }
        }
        cout<<endl;
    }
    
    return 0;
}


//indexing in 2d vector
//index = row*coloumn + coloumn
// row = index/coloumn
// coloumn = index%coloumn
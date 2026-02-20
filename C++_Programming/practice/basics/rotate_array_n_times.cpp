#include<iostream>
#include<algorithm>
#include<climits>
#include <vector>

using namespace std;

int main(){
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // ddriver code
    int n = matrix.size();
    int k;
    cout<<"how many times you want to rotate the array: ";
    cin >>k;
    if (k%4==0){
        //no rotation 
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
    }


    return 0;
}
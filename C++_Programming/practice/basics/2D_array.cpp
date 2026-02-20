#include<iostream>
#include <algorithm>
#include<climits>
using namespace std;

void printcol(int arr[][4],int row,int col){
    //column wise 
    for (int i=0;i<col;i++){
        for (int j=0;j<row;j++){
            cout<<arr[j][i]<<"  ";
        }
        cout<<endl;
    }
}

void print_row_max(int arr[][4],int row,int col){
    int index=-1,sum=INT_MIN;
    for (int i=0;i<row;i++){
        int total=0;
        for (int j=0;j<col;j++){
            total+=arr[i][j];
        }
        if (total>sum){
            sum=total;
            index=i;
        }
    }
    cout<<"row with maximum sum is "<<index<<" with sum "<<sum<<endl;
}

void print_sum_diagonal(int matrix[][3],int row ,int col){
    int first=0,second=0;
    //first digonal sum 
    int i=0;
    while (i<row){
        first+=matrix[i][i];
        i++;
    }
    //second digonal sum
    i=0;int j=col-1;
    while (j>=0){
        second+=matrix[i][j];
        i++;
        j--; 
    }
    cout <<"sum of first diagonal is "<<first<<endl;
    cout <<"sum of second diagonal is "<<second<<endl;
}

void reverse_row(int matrix[][3],int row ,int col){
    for (int i=0;i<row;i++){
        int start=0,end =col-1;
        while(start<end){
            swap(matrix[i][end],matrix[i][start]);
            start++;
            end--;
        }
    }
}
int main(){
    //create 2d array
    int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    int arr1[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    int arr2[3][4]={0,1,3,4,6,7,1,41,80,9,10,11};
    int ans[3][4];

    //print 2d array rpw wise

    for (int row =0;row<3;row++){
        for (int col=0;col<4;col++){
            cout<<arr[row][col]<<"  ";
        }
        cout<<endl;
    }

    //print 2d array column wise using function

        printcol(arr,3,4);

    //find an element in 2d array

    int x=7;
    for (int row=0;row<3;row++){
        for (int col=0;col<4;col++){
            if (arr[row][col]==x){
                cout<<"element found at "<<row<<","<<col<<endl;
                break;
            }
        }
    }
    cout<<"element not found"<<endl;

    //add two matrix
    for (int row =0;row<3;row++){
        for (int col=0;col<4;col++){
            ans [row][col]=arr1[row][col]+arr2[row][col];
    }
}
    //print the sum of two matrix
    for (int row =0;row<3;row++){
        for (int col=0;col<4;col++){
            cout<<ans[row][col]<<"  ";
        }
        cout<<endl;
    }

    //print row index with maximum sum
    print_row_max(arr1,3,4);

    //sum of digonal elements
    int matrix[3][3]={1,2,3,4,5,6,7,8,9};
    print_sum_diagonal(matrix,3,3);

    // reverse each row of matrix
    reverse_row(matrix,3,3);

    return 0;
}
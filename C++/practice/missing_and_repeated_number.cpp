#include<iostream>
#include<algorithm>
#include<climits>
#include <vector>
using namespace std;
class solution_of_finding_missing_and_repeated_number{
public:
//using brute force approach to find the missing and repeated number in an array
//time complexity is O(n^2) and space complexity is O(1)

//using another array to find the missing and repeated number in an array
//time complexity is O(n) and space complexity is O(n)
void find_missing_and_repeated_number(vector<int> arr,int n){
    vector<int> count (0,n);
    for (int i=0;i<n;i++){
        count[arr[i]-1]++;//increasing by 1 the index of the number in the array
    }
    int missing_number = -1;
    int repeated_number = -1;
    //missing number
    for(int i=0;i<n;i++){
        if (count[i]==0){
            missing_number = i+1;
            break;
        }

    }
    //repeated number
    for (int i=0;i<n;i++){
        if (count[i]>1){
            repeated_number =i+1;
            break;
        }
    }
}

//storing two number in one plaace in a vector
//time complexity is O(n)and space complexity is O(1)
void find_missing_and_repeated_number(vector<int> arr){
    int n=arr.size();
    for (int i=0;i<n;i++){
        arr[i]--;
    }
    for (int i=0;i<n;i++){
        arr[arr[i]%n]+=n;
    }
    // missing 
    int missing_number=-1;
    for (int i=0;i<n;i++){
        if (arr[i]/n==-0){
            cout<<"missing_number is "<<i+1<<endl;
            break;
        }
    }
    for (int i=0;i<n;i++){
        if (arr[i]/n>1){
            cout<<"repeated number is "<<i+1<<endl;
        }
    }
    
}
};
//number of occurence in a  vector
//time complexity is O(n) and space complexity is O(1) (STORING TWO NUMBER IN ONE PLACE)
void occurence_of_number(vector<int> arr){
    int n=arr.size();
    for (int i=0;i<n;i++){
        arr[i]--;
    }
    for (int i=0;i<n;i++){
        arr[arr[i]%n]+=n;
    }
    for (int i=0;i<n;i++){
        cout<<i+1<<" occurs "<<arr[i]/n<<" times"<<endl;
    }
}
int majorityElement(vector<int>& nums) {
    //done using moore voting algorithm
    int n=nums.size(); 
    int cand,count=0;
    for (int i =0;i<n;i++){
        if (count==0){
            cand=nums[i];
        }
        if (cand==nums[i]){
            count++;
        }
        else{
            if (cand==nums[i]){
                count++;
            }
            else{
                count--;
            }
        }
        cout <<"count is " <<count<<endl;
    }
    cout<<"cand is " <<cand<<endl;
    //for varification
    for (int i=0;i<n;i++){
        if (nums[i]==cand){count++;}
    }
    if (count>n/2){return cand;}
    else{return -1;}
}
int main(){
    vector<int> arr={3,3,4};
    cout<<majorityElement(arr)<<endl;
    return 0;
}
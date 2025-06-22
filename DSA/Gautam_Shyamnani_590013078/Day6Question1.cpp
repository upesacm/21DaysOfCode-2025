#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int duplicate(vector<int>nums,int n){
    int count=1;
    sort(nums.begin(),nums.end());
    for(int i=0;i<n;i++){
        if(nums[i]==count){
            count++;
        }else{
            return count-1;
        }
    }
}
int main(){
    vector<int>nums={1,3,4,2,2};
    int n=nums.size();
    cout<<duplicate(nums,n)<<endl;
    return 0;
}

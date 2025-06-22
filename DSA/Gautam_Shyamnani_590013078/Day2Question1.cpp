#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>nums={3,4,6,9};
    int sum=0;
    int n=nums.size();
    for(int i=0;i<n;i++){
        if(nums[i]%2==0){
            sum+=nums[i];
        }
    }
    cout<<"The sum of even numbers in the array is: "<<sum<<endl;
    return 0;
}

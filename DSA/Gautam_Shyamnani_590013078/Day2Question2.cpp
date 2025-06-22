#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>nums={2,3,7,1,9};
    int n=nums.size();
    int First=nums[0],Last=nums[n-1];
    cout<<"First: "<<First<<", Last: "<<Last<<endl;
    return 0;
}

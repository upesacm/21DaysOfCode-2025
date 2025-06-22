#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>nums={3,5,9,1,4,11};
    int n=nums.size();
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=nums[i];
    }
    cout<<"The sum of all the elements of the array is: "<<sum<<endl;
    return 0;
}

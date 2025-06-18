#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int secondlargest(vector<int>arr,int n){
    sort(arr.begin(),arr.end());
    int largest=arr[n-1];
    for(int i=n-2;i>=0;i--){
        if(arr[i]!=largest){
            int secondlargest=arr[i];
            return secondlargest;
        }
    }
    return -1;
}
int main(){
    vector<int>arr={9,8,8,18};
    int n=arr.size();
    cout<<secondlargest(arr,n)<<endl;
    return 0;
}

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int issame(vector<int>arr1,vector<int>arr2,int m,int n){
    if(m!=n){
        return 0;
    }
    sort(arr1.begin(),arr1.end());
    sort(arr2.begin(),arr2.end());
    for(int i=0;i<n;i++){
        if(arr1[i]!=arr2[i]){
            return 0;
        }
    }
    return 1;
}
int main(){
    vector<int>arr1={4,1,3,2};
    int n=arr1.size();
    vector<int>arr2={1,4,2,3};
    int m=arr2.size();
    if(issame(arr1,arr2,m,n)){
        cout<<"Both arrays are same";
    }else{
        cout<<"Both arrays are not same";
    }
    return 0;
}

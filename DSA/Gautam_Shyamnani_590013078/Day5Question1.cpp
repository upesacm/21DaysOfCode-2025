#include<iostream>
#include<vector>
using namespace std;
int singlevalue(vector<int>arr,int n){
    int st=0,end=n-1;
     while(st<=end){
        int mid=st+(end-st)/2;
        if(mid==0 && arr[mid+1]!=arr[mid]){
            return arr[mid];
        }
        if(mid==n-1 && arr[mid-1]!=arr[mid]){
            return arr[mid];
        }
        if(arr[mid-1]!=arr[mid] && arr[mid+1]!=arr[mid]){
            return arr[mid];
        }
        if(mid%2==0){
            if(arr[mid-1]==arr[mid]){
                end=mid-1;
            }
            else{
                st=mid+1;
            }
        }else{
            if(arr[mid-1]==arr[mid]){
                st=mid+1;
            }else{
                end=mid-1;
            }
        }
    }
    
}
int main(){
    vector<int>arr={2,2,5,5,7,7,2};
    int n=arr.size();
    cout<<singlevalue(arr,n)<<endl;
    return 0;
}

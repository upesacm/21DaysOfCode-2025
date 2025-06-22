#include<iostream>
#include<vector>
using namespace std;
bool ispalindrome(vector<int>arr,int n){
    int i=0,j=n-1;
    while(i<=j){
        if(arr[i]==arr[j]){
            i++,j--;
        }else{
            return false;
        }
    }
    return true;
}
int main(){
    vector<int>arr={2,3,4,3,2};
    int n=arr.size();
    if(ispalindrome(arr,n)){
        cout<<"true";
    }else{
        cout<<"false";
    }
    return 0;
}

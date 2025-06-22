#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int missingnumber(vector<int>arr,int n){
    sort(arr.begin(),arr.end());
    int count=0;
    for(int i=0;i<n;i++){
        if(count==arr[i]){
            count++;
        }
        else{
            return count;
        }
    }
    return n;
}
int main(){
    vector<int>arr={9, 6, 4, 2, 3, 5, 7, 0, 1};
    int n=arr.size();
    cout<<missingnumber(arr,n)<<endl;
    return 0;
}

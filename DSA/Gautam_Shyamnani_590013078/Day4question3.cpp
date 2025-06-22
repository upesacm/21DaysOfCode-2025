#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr={3,2,2,3};
    int k=3;
    int n=arr.size();
    int count=0;
    for(int i=0;i<n;i++){
        if(k==arr[i]){
            count++;
        }
    }
    int newsize=n-count;
    cout<<newsize<<endl;
    return 0;
}

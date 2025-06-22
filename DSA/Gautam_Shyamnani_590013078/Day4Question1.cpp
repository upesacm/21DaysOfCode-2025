#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr={-3,-1,-5,-2};
    int min=arr[0];
    int n=arr.size();
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<min<<endl;
    return 0;
}

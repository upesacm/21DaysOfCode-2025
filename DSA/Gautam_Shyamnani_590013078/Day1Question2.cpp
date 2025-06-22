#include<iostream>
#include<vector>
using namespace std;
void repeat(vector<int>arr,int n){
    for(int i=0;i<n;i++){
        if(arr[i+1]==arr[i]){
            cout<<"Repeat:"<<arr[i]<<endl;
        }
    }
}
void missing(vector<int>arr,int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    int req=1;
    for(int i=1;i<n;i++){
        if(arr[i-1]==req || arr[i]==req){
             req++;
            continue;
           
        }
        else{
            cout<<"Missing element is: "<<i<<endl;
            return;
        }
    }
    
}
int main(){
    vector<int>arr={2,4, 5, 5, 1};
    int n=arr.size();
    missing(arr,n);
    repeat(arr,n);
    return 0;
}

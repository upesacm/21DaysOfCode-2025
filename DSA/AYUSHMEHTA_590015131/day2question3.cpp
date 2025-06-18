#include <iostream>
using namespace std;
#include<vector>
#include<algorithm>

bool compareTwoArray(vector<int>&arr1 ,int a, vector<int>arr2, int b ){
if(a!=b) return false;
for(int i=0;i<a;i++){
 if(arr1[i]!=arr2[i]) return false;
 
}
return true;
}


int main(){
    int a;
    cout<<"Enter the no of elements for array 1 :"<< " ";
    cin>>a;
    int b;
    cout<<"Enter the no of elements for array 2 :"<< " ";
    cin>>b;
    vector<int>arr1(a);
    vector<int>arr2(b);
    cout<<"Enter the elements for array 1:"<<" ";
    for(int i=0;i<a;i++) cin>>arr1[i];
    cout<<"Enter the elements for array 2:"<<" ";
    for(int i=0;i<b;i++) cin>>arr2[i];
    sort(arr1.begin(),arr1.end());
    sort(arr2.begin(),arr2.end());
    if(compareTwoArray(arr1,a,arr2,b)) cout<<"Yes both the arrays are equal "<<endl;
    else cout<< "No both are different from each other"<<endl;





}
#include <iostream>
#include<vector>
using namespace std;

void secondLargest(vector<int>&arr,int n){
    int largest=0,slargest=-1;
    for(int i=0;i<n;i++){
     if(arr[i]>largest){
        slargest=largest;
        largest=arr[i];
     }
     else if (arr[i]>slargest && arr[i]!=largest) slargest=arr[i];
    
    }
    cout<<"The second largest element in the array is:"<<" "<<slargest;

}



int main(){
    int n;
    cout<<"Enter the no of elements :"<< " ";
    cin>>n;
    if (n < 2) {
        cout << "Need at least two elements.\n";
        return 0;
    }
    
    
    
    
    vector<int>arr(n);
    cout<<"Enter the array elements:"<< " ";
    for(int i=0;i<n;i++) cin>>arr[i];
    secondLargest(arr,n);

}

#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"First: "<<arr[0]<<", Last: "<<arr[n-1];
    return 0;
}

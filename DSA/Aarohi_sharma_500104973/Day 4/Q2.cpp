#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, k;
    cin>>n>>k;
    k%=n;
    vector<int> arr(n), ans;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        if(i<k) cout<<arr[i+n-k]<<" ";
        else cout<<arr[i-k]<<" ";
    }
    return 0;
}

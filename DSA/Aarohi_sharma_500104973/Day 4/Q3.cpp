#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, val;
    cin>>n>>val;
    vector<int> arr(n), ans;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        if(arr[i]!=val) ans.push_back(arr[i]);
    }
    cout<<ans.size();
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    unordered_map<int, int> mp;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        mp[arr[i]]++;
    }
    bool flag=0;
    for(auto const &pos: mp){
        if(pos.second>1) flag=1;
    }
    if(flag==1) cout<<"true";
    else cout<<"false";
    return 0;
}

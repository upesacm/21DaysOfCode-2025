#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, t, m;
    cin>>n;
    vector<int> arr(n);
    vector<int> inp(n, 0);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr.begin(), arr.end());
    for(int i=0; i<n; i++){
        inp[arr[i]-1]++;
    }
    for(int i=0; i<n; i++){
        if(inp[i]==2) t=i+1;
        if(inp[i]==0) m=i+1;
    }
    cout<<"Missing: "<<m<<", Twice: "<<t;
    return 0;
}

#include<iostream>
#include<algorithm>
#include<vector>
#include<bitset>
#include<set>
#include<climits>
#include<ctime>
#include<map>
#include<unordered_map>
#include<cstdlib>
#include<string>
#include<queue>
using namespace std;
bool same(long long a[], long long n) {
    for (int i = 1; i < n; ++i) {
        if (a[i] != a[0]) {
            return false;
        }
    }
    return true;
}
int main() {
    long long n; cin>>n;
    long long a[n];
    for(long long i=0; i<n; i++) {
        cin>>a[i];
    }
    sort(a, a+n);
    if(n>1&&a[0]!=a[n-2]) {
        cout<<a[n-2]<<endl;
    }
    if(same(a, n)) {
        cout<<"-1"<<endl;
    }


return 0;
}

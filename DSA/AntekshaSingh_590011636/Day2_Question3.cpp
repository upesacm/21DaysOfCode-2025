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
int main() {
    long long n, m; cin>>n>>m;

    if (n!=m) {
        cout<<"false"<<endl;
        return 0;
    }
    long long a[n], b[m];
    for (long long i=0; i<n; i++) cin>>a[i];
    for (long long i=0; i<m; i++) cin>>b[i];
    sort(a, a + n);
    sort(b, b + m);
    for (long long i=0; i<n; i++) {
        if (a[i]!=b[i]) {
            cout<<"false"<<endl;
            return 0;
        }
    }

    cout<<"true"<<endl;
    return 0;
}

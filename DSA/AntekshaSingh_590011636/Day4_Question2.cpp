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
void rotate(long long a[], long long n, long long k) {
    k=k%n;
    reverse(a, a+n);
    reverse(a, a+k);
    reverse(a+k, a+n);
}
int main() {
    long long n,k; cin>>n>>k;
    long long a[n];
    for(long long i=0; i<n; i++) {
        cin>>a[i];
    }
    rotate(a, n, k);
    for (int i = 0; i < n; ++i)
        cout << a[i] << " ";
return 0;
}

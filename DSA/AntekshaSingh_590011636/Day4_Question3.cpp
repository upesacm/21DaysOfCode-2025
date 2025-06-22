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
int remove(long long a[], long long n, long long val) {
    long long index=0;
    for (long long i=0; i<n; i++) {
        if (a[i]!=val) {
            a[index++]=a[i]; 
        }
    }
    return index;
}

int main() {
    long long n, val; cin>>n>>val;
    long long a[n];
    for(long long i=0; i<n; i++) {
        cin>>a[i];
    }
    int newlen=remove(a, n, val);
    cout<<newlen<<endl;
return 0;
}

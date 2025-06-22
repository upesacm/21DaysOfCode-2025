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
int missingNumber(long long a[], long long n) {
    long long total=(n*(n+1))/2;  
    long long sum=0;
    for (long long i=0; i<n; i++) {
        sum+=a[i];
    }
    return total-sum;
}
int main() {
    long long n; cin>>n;
    long long a[n];
    for(long long i=0; i<n; i++) {
        cin>>a[i];
    }
    cout<<missingNumber(a, n)<<endl;
return 0;
}

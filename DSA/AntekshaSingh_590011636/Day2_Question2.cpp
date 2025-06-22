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
    long long n; cin>>n;
    long long a[n];
    long long first, last;
    long long sum=0;
    for(long long i=0; i<n; i++) {
        cin>>a[i];
        first=a[0];
        last=a[n-1];
    }
    cout<<"First: "<<first<<", Last: "<<last<<endl;
return 0;
}

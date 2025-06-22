#include<iostream>
#include<algorithm>
#include<vector>
#include<bitset>
#include<set>
#include<climits>
#include<ctime>
#include<map>
#include<unordered_set>
#include<unordered_map>
#include<cstdlib>
#include<string>
#include<queue>
using namespace std;
bool duplicate(long long a[], long long n){
    unordered_set<long long>seen;
for(long long i=0; i<n; i++) {
    if(seen.count(a[i])) {
        return true;
    }
    seen. insert(a[i]);
}
return false;
}

int main() {
    long long n; cin>>n;
    long long a[n];
    for(long long i=0; i<n; i++) {
        cin>>a[i];
    }
    if(duplicate(a, n)) {
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
return 0;
}

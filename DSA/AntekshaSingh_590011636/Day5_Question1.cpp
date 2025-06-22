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
    for(long long i=0; i<n; i++) {
        cin>>a[i];
    }
    unordered_map<long long, long long>frequency;
    for(long long i=0; i<n; i++) {
        frequency[a[i]]++;
    }
    for(int i=0; i<n; i++) {
        if(frequency[a[i]]==1) {
            cout<<a[i]<<endl;
        }
    }
return 0;
}

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
    long long num, k; cin>>num>>k;
    long long a[num];
    unordered_map<long long, long long>freq;
    for(long long i=0; i<num; i++) {
        cin>>a[i];
        freq[a[i]]++;
    }
    int sum=0;
    for(auto &pair:freq) {
        if(pair.second==k) {
            sum +=pair.first;
        }
    }
    cout<<sum<<endl;
return 0;
}

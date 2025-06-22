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
    long long sum = 0, sumsq = 0;
    long long s = (long long)n * (n + 1) / 2;
    long long s2 = (long long)n * (n + 1) * (2 * n + 1) / 6;
    for(long long i=0; i<n; i++) {
        cin>>a[i];
        sum += a[i];
        sumsq += (long long)a[i] * a[i];
    }
    long long diff = sum - s;
    long long sqdiff = sumsq - s2;
    long long sumrm = sqdiff / diff;
    long long R = (diff + sumrm) / 2;
    long long M = R - diff;

    cout<<"Missing: "<<M<<", Twice: "<<R<<endl;
}

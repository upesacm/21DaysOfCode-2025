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
bool palindrome( long long a[], long long n) {
    long long left=0;
    long long right=n-1;
    while(left<right) {
        if(a[left]!=a[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}
int main() {
    long long n; cin>>n;
    long long* a = new long long[n];
    for(long long i=0; i<n; i++) {
        cin>>a[i];
    }
    cout<<boolalpha<<palindrome(a, n)<<endl;
    delete[] a;
return 0;
}

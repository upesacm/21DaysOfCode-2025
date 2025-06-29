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
string compress(const string& str) {
    string result = "";
    long long n = str.length();
    for(long long i=0; i<n; i++) {
        long long count=1;
        while(i+1<n && str[i]==str[i+1]) {
            count++;
            i++;
        }
        result+=str[i];
        result+=to_string(count);
    }
    return result;
}
int main() {
    string s; cin >> s;
    string compressed=compress(s);
    cout<<compressed<<endl;
    return 0;
}

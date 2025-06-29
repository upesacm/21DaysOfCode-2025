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
string deletdups(string str) {
    unordered_set<char>seen;
    string result = "";
    for(char c:str) {
        if(seen.find(c)==seen.end()) {
            seen.insert(c);
            result+=c;
        }
    }
    return result;
}

int main() {
    string s; cin>>s;
    string noDuplicates=deletdups(s);
    cout<<noDuplicates<<endl;
    return 0;
}

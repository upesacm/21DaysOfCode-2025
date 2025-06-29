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
bool rotation(string s1, string s2) {
    if(s1.length()!=s2.length()) return false;
    string temp=s1+s1;
    return temp.find(s2)!=string::npos;
}
int main() {
    string s1, s2;cin >> s1>>s2;
    if(rotation(s1, s2)) {
        cout<<"true"<<endl;
    } else {
        cout<<"false"<<endl;
    }

    return 0;
}

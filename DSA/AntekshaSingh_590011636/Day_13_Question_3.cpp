#include<iostream>
#include<algorithm>
#include<vector>
#include<bitset>
#include<set>
#include<climits>
#include<ctime>
#include<map>
#include<sstream>
#include<unordered_map>
#include<cstdlib>
#include<string>
#include<queue>
using namespace std;
string reversestring(string s) {
    stringstream ss(s);
    string word;
    vector<string>words;
    while(ss>>word) {
        words.push_back(word);
    }
    reverse(words.begin(), words.end());
    string result = "";
    for(long long i=0; i<words.size();i++) {
        result+=words[i];
        if (i!=words.size()-1) {
            result+=" ";
        }
    }
    return result;
}

int main() {
    string input; getline(cin, input);
    string reversed = reversestring(input);
    cout<<reversed<<endl;
    return 0;
}

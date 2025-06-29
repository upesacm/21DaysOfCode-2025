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
bool pp(string s) {
    unordered_map<char, int> freq;
    for(char c:s) {
        if(isalpha(c)) {
            freq[tolower(c)]++;
        }
    }
    long long oddCount = 0;
    for(auto pair:freq) {
        if (pair.second%2!=0) {
            oddCount++;
        }
    }
    return oddCount <= 1;
}
int main() {
    string input; getline(cin, input);
    if(pp(input)) {
        cout<<"true"<<endl;
    } else {
        cout<<"false"<<endl;
    }
    return 0;
}

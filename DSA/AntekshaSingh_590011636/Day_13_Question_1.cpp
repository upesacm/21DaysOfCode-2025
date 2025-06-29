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
#include<sstream>
#include<queue>
using namespace std;
int main() {
    string s; getline(cin, s); 
    stringstream ss(s);
    string word;
    long long wordcount=0;
    string longestword="";
    while(ss>>word) {
        wordcount++;
        if(word.length()>longestword.length()) {
            longestword=word;
        }
    }
    cout<<"Word count: "<<wordcount<<endl;
    cout << "Longest word: " << longestword<< endl;
    return 0;
}

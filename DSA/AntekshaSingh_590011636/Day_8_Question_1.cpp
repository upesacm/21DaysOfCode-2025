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
   string s; 
   getline(cin, s);
   string upper = s;
    string lower = s;
    for (char &c : upper) {
        c = toupper(c);
    }
    for (char &c : lower) {
        c = tolower(c);
    }
   cout<<"Lenght: "<<s.length()<<", Original: "<<s<<", Uppercase: "<<upper<<", Lowercase :"<<lower<<endl;
return 0;
}

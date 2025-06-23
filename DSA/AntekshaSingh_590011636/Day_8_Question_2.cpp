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
    char Character; cin>>Character;
    int count=0; for(char c:s) {
        if(tolower(c)==Character) {
            count++;
        }
    }
    cout<<count<<endl;
return 0;
}

#include <iostream>
using namespace std;

int getFreq(string &s, char character) {
    int cnt = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i]==character|| s[i] - 32 == character || s[i] + 32 == character) {
            cnt++;
        }
    }
    return cnt;
}

int main() {
    string s;
    cout << "Enter the string: ";
    getline(cin, s);  

    char c;
    cout << "Enter the character to check: ";
    cin >> c;

    int freq = getFreq(s, c);  
    cout<<"The frequency of character given by you is:"<<" "<<freq;

    return 0;
}

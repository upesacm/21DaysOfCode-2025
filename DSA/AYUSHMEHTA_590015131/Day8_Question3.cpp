#include <iostream>
using namespace std;

void palindromeS(string &s, int start, int end){
    while(start<=end){
     swap(s[start],s[end]);
     start++;
     end--;
    }
    cout<<"The reversed string is:"<<" "<<s;

}



int main() {
    string s;
    cout << "Enter the string: ";
    getline(cin, s);  
    palindromeS(s,0,s.size()-1);

}

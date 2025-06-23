#include<iostream>
using namespace std;

int findLength(string &s){
    int length=0;
    while(s[length]!='\0') length++;
    return length;
}
string toUpperCase(string &s){
    for(int i=0;i<findLength(s);i++){
        if(s[i]>='a'&& s[i]<='z'){
            s[i]=s[i]-32;
        }
    }
    return s;
}

string toLowerCase(string &s){
    for(int i=0;i<findLength(s);i++){
        if(s[i]>='A'&& s[i]<='Z'){
            s[i]=s[i]+32;
        }
    }
    return s;
}


int main(){
    string s;
    cout<<"Enter the string:"<<" ";
    getline(cin, s);  
   int size= findLength(s);
   string upper = toUpperCase(s);
  string lower = toLowerCase(s);
cout << "Length: " << size <<  "\", Uppercase: \"" << upper << "\", Lowercase: \"" << lower << "\"" << endl;
return 0;




}
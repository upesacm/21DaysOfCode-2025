#include <iostream>
#include <string>

using namespace std;

string toUpperCase(string str) {
    for (char &c : str) {
        if (c >= 'a' && c <= 'z') {
            c = c - 'a' + 'A';
        }
    }
    return str;
}

string toLowerCase(string str) {
    for (char &c : str) {
        if (c >= 'A' && c <= 'Z') {
            c = c - 'A' + 'a';
        }
    }
    return str;
}

int main() {
    string input;
    
    cout << "Enter a string: ";
    getline(cin, input);
    
    int length = input.length();
    
    string upper = toUpperCase(input);
    string lower = toLowerCase(input);
    
    cout << "\nOriginal string: " << input << endl;
    cout << "String length: " << length << " characters" << endl;
    cout << "Uppercase version: " << upper << endl;
    cout << "Lowercase version: " << lower << endl;
    
    return 0;
}

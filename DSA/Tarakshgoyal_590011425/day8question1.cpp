#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    int length = 0;
    while (input[length] != '\0') {
        length++;
    }

    cout << "Uppercase: ";
    for (int i = 0; i < length; i++) {
        char ch = input[i];
        if (ch >= 'a' && ch <= 'z') {
            ch = ch - ('a' - 'A');
        }
        cout << ch;
    }
    cout << endl;

    cout << "Lowercase: ";
    for (int i = 0; i < length; i++) {
        char ch = input[i];
        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + ('a' - 'A');
        }
        cout << ch;
    }
    cout << endl;

    return 0;
}

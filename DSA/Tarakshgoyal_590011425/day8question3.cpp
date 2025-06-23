#include <iostream>
#include <string>
using namespace std;

string reverseString(string input) {
    int start = 0;
    int end = 0;

    while (input[end] != '\0') {
        end++;
    }
    end--;

    while (start < end) {
        char temp = input[start];
        input[start] = input[end];
        input[end] = temp;
        start++;
        end--;
    }

    return input;
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    string reversed = reverseString(str);
    cout << "Reversed string: " << reversed << endl;

    return 0;
}

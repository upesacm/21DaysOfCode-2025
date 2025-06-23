#include <iostream>
#include <string>

using namespace std;

int countCharacter(const string& str, char target) {
    int count = 0;
    for (char c : str) {
        if (c == target) {
            count++;
        }
    }
    return count;
}

int main() {
    string input;
    char targetChar;
    
    cout << "Enter a string: ";
    getline(cin, input);
    
    cout << "Enter the character to count: ";
    cin >> targetChar;
    
    int occurrences = countCharacter(input, targetChar);
    
    cout << "\nThe character '" << targetChar << "' appears " 
         << occurrences << " times in the string.\n";
    
    return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    char target;
    int count = 0;

    cout << "Enter a string: ";
    getline(cin, input);

    cout << "Enter the character to count: ";
    cin >> target;

    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] == target) {
            count++;
        }
    }

    cout << "Character '" << target << "' occurs " << count << " times." << endl;

    return 0;
}

#include <iostream>
using namespace std;
bool equal(int a[], int b[], int n) {
    int freqA[1000] = {0};
    int freqB[1000] = {0};
    for (int i = 0; i < n; i++) {
        freqA[a[i]]++;
        freqB[b[i]]++;
    }
    for (int i = 0; i < 1000; i++) {
        if (freqA[i] != freqB[i]) {
            return false;
        }
    }
    return true;
}
int main() {
    int n;
    cout << "Enter the number  ";
    cin >> n;
    int a[100], b[100];
    cout << "Enter " << n << " first array:\n";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << "Enter " << n << " second array:\n";
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    if (equal(a, b, n)) {
        cout << "equal.\n";
    } else {
        cout << "not equal.\n";
    }
    return 0;
}
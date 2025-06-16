// Time Complexity O(n) and space O(n)
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void findMissingAndRepeated(const vector<int>& arr) {
    unordered_map<int, int> freq;
    int n = arr.size();

    for (int num : arr) {
        freq[num]++;
    }

    int missing = -1, repeated = -1;

    for (int i = 1; i <= n; i++) {
        if (freq[i] == 0) {
            missing = i;
        } else if (freq[i] == 2) {
            repeated = i;
        }
    }

    cout << "repeated: " << repeated << endl;
    cout << "missing: " << missing << endl;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    findMissingAndRepeated(arr);


}

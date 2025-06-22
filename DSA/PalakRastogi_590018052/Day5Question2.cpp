#include<iostream>
#include<vector>
using namespace std;

int missingNumber(vector<int> &arr) {
    int n = arr.size();
    int total = n * (n + 1) / 2;  // Sum from 0 to n
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    return total - sum;
}

int main() {
    vector<int> arr = {0, 1, 3};  // Missing 2
    cout << "Missing Number: " << missingNumber(arr) << endl;
    return 0;
}

#include <iostream>
using namespace std;

int missingNumber(int nums[], int n) {
   int total = n * (n + 1) / 2;
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += nums[i];
    }
    return total - sum;
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int nums[n-1];
    cout << "Enter distinct numbers"<<endl;
    for (int i = 0; i < n-1; i++) {
        cin >> nums[i];
    }

    cout << "The missing number is: " << missingNumber(nums, n-1) << endl;
    return 0;
}
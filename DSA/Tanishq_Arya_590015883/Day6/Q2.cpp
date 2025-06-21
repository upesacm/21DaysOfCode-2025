#include <iostream>
using namespace std;

bool StrictlyIncreasing(int* nums, int numsSize) {
    if (numsSize <= 1) {
        return true;
    }
    for (int i = 1; i < numsSize; ++i) {
        if (nums[i] <= nums[i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int* nums = new int[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    bool result = StrictlyIncreasing(nums, n);
    if (result) {
        cout << "The array is strictly increasing." << endl;
    } else {
        cout << "The array is not strictly increasing." << endl;
    }

    return 0;
}
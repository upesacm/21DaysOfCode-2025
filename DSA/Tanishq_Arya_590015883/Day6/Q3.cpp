#include <iostream>
using namespace std;
int longestSubarray(int* nums, int n) {
    if (n == 0) return 0;
    
    int max_length = 1;
    int current_length = 1;
    
    for (int i = 1; i < n; ++i) {
        if (nums[i] == nums[i - 1] + 1) {
            current_length++;
            if (current_length > max_length) {
                max_length = current_length;
            }
        } else {
            current_length = 1;
        }
    }
    
    return max_length;
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
    int result = longestSubarray(nums, n);
    cout << "Length of the longest subarray: " << result << endl;
    
    return 0;
}
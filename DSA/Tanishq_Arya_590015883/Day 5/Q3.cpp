#include <iostream>
using namespace std;

bool isPalindrome(int nums[], int n) {
    int left = 0;
    int right = n - 1;
    
    while (left < right) {
        if (nums[left] != nums[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    
    int nums[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    if (isPalindrome(nums, n)) {
        cout << "True." <<endl;
    } else {
        cout << "False" <<endl;
    }
    
    return 0;
}
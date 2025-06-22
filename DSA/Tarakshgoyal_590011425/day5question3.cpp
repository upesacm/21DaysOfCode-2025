#include <iostream>
#include <vector>
using namespace std;

bool isPalindrome(vector<int>& nums) {
    int left = 0;
    int right = nums.size() - 1;
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
    vector<int> nums = {1, 2, 3, 2, 1};
    cout << boolalpha << isPalindrome(nums) << endl;
    return 0;
}

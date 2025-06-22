#include <iostream>
#include <vector>

using namespace std;

bool checkPalindrome(const vector<int> &nums) {
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

  vector<int> nums = {4, 3, 2, 1, 2, 3, 4};
  checkPalindrome(nums) ? cout << "true" : cout << "false";
}

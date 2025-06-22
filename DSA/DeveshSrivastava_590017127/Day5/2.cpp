#include <iostream>
#include <vector>

using namespace std;

int findMissingNumber(const vector<int> &nums) {
  int n = nums.size();
  int expectedSum = n * (n + 1) / 2;
  int actualSum = 0;
  for (int num : nums) {
    actualSum += num;
  }
  return expectedSum - actualSum;
}

int main() {
  vector<int> nums1 = {3, 0, 1};
  cout << findMissingNumber(nums1) << endl;

  vector<int> nums2 = {0, 1};
  cout << findMissingNumber(nums2) << endl;

  vector<int> nums3 = {9, 6, 4, 2, 3, 5, 7, 0, 1};
  cout << findMissingNumber(nums3) << endl;

  return 0;
}

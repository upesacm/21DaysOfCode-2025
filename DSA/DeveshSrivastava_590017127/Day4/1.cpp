#include <iostream>
#include <vector>
using namespace std;

int findMin(const vector<int> &nums) {

  int minElement = nums[0];
  for (int num : nums) {
    if (num < minElement) {
      minElement = num;
    }
  }
  return minElement;
}

int main() {
  vector<int> nums = {4, 2, 7, 1, 9};
  cout << findMin(nums) << endl;

  nums = {5, 5, 5};
  cout << findMin(nums) << endl;

  nums = {-3, -1, -5, -2};
  cout << findMin(nums) << endl;

  return 0;
}

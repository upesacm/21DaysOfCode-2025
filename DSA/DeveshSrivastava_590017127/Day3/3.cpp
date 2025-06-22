#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int findSecondLargest(const vector<int> &nums) {

  if (nums.size() < 2) {
    return -1;
  };

  // checking if all are same
  bool allSame = true;
  for (size_t i = 1; i < nums.size(); ++i) {
    if (nums[i] != nums[0]) {
      allSame = false;
      break;
    }
  }
  if (allSame) {
    return -1;
  }

  vector<int> sortedNums = nums;
  sort(sortedNums.begin(), sortedNums.end());
  return sortedNums[sortedNums.size() - 2];
}

int main() {

  int n;
  cout << "Enter the number of elements in the array: ";
  cin >> n;
  vector<int> nums(n);
  cout << "Enter the elements of the array: ";
  for (int i = 0; i < n; ++i) {
    cin >> nums[i];
  }
  int result = findSecondLargest(nums);
  cout << result << endl;
}

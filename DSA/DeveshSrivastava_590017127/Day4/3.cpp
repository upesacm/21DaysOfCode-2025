
#include <iostream>
#include <vector>
using namespace std;

vector<int> removeAllOccurance(vector<int> &nums, int val) {

  int n = nums.size();
  int j = 0;

  for (int i = 0; i < n; i++) {
    if (nums[i] != val) {
      nums[j] = nums[i];
      j++;
    }
  }
  nums.resize(j);
  return nums;
}

int main() {
  vector<int> nums = {3, 2, 2, 3, 4, 5, 3};
  int val = 3;

  vector<int> result = removeAllOccurance(nums, val);
  for (int num : result) {
    cout << num << " ";
  }
  cout << endl;

  return 0;
}

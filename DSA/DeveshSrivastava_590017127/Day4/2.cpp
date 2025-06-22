#include <iostream>
#include <vector>

using namespace std;

vector<int> rotateArray(vector<int> &nums, int k) {
  int n = nums.size();
  k = k % n;
  vector<int> rotated(n);

  for (int i = 0; i < n; ++i) {
    rotated[(i + k) % n] = nums[i];
  }

  return rotated;
}

int main() {

  vector<int> nums = {1, 2, 3, 4, 5};
  int k = 2;

  vector<int> rotated = rotateArray(nums, k);

  for (int num : rotated) {
    cout << num << " ";
  }
  cout << endl;
  return 0;
}

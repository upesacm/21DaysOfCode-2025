#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

bool checkDuplicate(const vector<int> &nums) {
  unordered_set<int> seen;
  for (int num : nums) {
    if (seen.find(num) != seen.end()) {
      return false;
    }
    seen.insert(num);
  }
  return true;
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
  bool hasDuplicate = checkDuplicate(nums);
  cout << (hasDuplicate ? "false" : "true") << endl;
}

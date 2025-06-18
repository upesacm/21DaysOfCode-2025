#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int freqSum(const vector<int> &nums, int k) {
  unordered_map<int, int> freq;
  for (int num : nums) {
    ++freq[num];
  }

  int sum = 0;
  for (const auto &[num, count] : freq) {
    if (count == k) {
      sum += num;
    }
  }
  return sum;
}

int main() {

  int n, k;
  cout << "Enter the number of elements in the array: ";
  cin >> n;
  vector<int> nums(n);
  cout << "Enter the elements of the array: ";
  for (int i = 0; i < n; ++i) {
    cin >> nums[i];
  }
  cout << "Enter the frequency k: ";
  cin >> k;
  int result = freqSum(nums, k);
  cout << "Sum of elements with frequency " << k << ": " << result << endl;
  return 0;
}

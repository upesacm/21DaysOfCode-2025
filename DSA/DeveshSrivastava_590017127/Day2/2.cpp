#include <iostream>
#include <vector>

using namespace std;

pair<int, int> firstLast(vector<int> &nums) {
  if (nums.empty()) {
    return {0, 0};
  }
  return {nums.front(), nums.back()};
}

int main() {

  vector<int> nums = {1, 2, 3, 4, 5, 6};
  auto result = firstLast(nums);
  cout << "First element: " << result.first
       << ", Last element: " << result.second << endl;

  return 0;
}

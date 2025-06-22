#include <algorithm>
#include <iostream>
#include <vector>

class Solution {

  public:
    bool checkFullyIncreasing(const std::vector<int> &nums) {

      for (size_t i = 1; i < nums.size(); ++i) {
        if (nums[i] <= nums[i - 1]) {
          return false;
        }
      }
      return true;
    }

    void printVector(const std::vector<int> &nums) {
      std::cout << "Vector elements: ";
      for (const auto &num : nums) {
        std::cout << num << " ";
      }
      std::cout << std::endl;
    }
};

int main() {

  Solution *sol = new Solution();
  std::vector<int> nums = {1, 2, 3, 4, 5};
  sol->printVector(nums);
  bool isIncreasing = sol->checkFullyIncreasing(nums);
  std::cout << (isIncreasing ? "True" : "False") << std::endl;
  return 0;
}

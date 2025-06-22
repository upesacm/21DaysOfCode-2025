#include <algorithm>
#include <iostream>
#include <vector>

class Solution {

  public:
    int findLenOfLongestIncreasingSubseq(const std::vector<int> &nums) {
      if (nums.empty())
        return 0;

      int left = 0;
      int maxLength = 1;
      for (int right = 1; right < nums.size(); ++right) {
        if (nums[right] - nums[right - 1] == 1) {
          maxLength = std::max(maxLength, right - left + 1);
        } else {
          left = right;
        }
      }
      return maxLength;
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
  std::vector<int> nums = {1, 2, 3, 5, 6, 7};
  sol->printVector(nums);
  int longestLength = sol->findLenOfLongestIncreasingSubseq(nums);
  std::cout << longestLength << std::endl;
}

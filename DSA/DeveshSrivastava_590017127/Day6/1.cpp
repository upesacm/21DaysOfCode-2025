#include <iostream>
#include <numeric>
#include <vector>
class Solution {

  public:
    int findDuplicateInUnsortedSequence(const std::vector<int> &nums) {
      int n = nums.size();
      int sum = std::accumulate(nums.begin(), nums.end(), 0);
      int expectedSum = n * (n - 1) / 2;
      return sum - expectedSum;
    }
    void enterVector(std::vector<int> &nums) {
      int n;
      std::cout << "Enter the number of elements in the vector: ";
      std::cin >> n;
      nums.resize(n);
      std::cout << "Enter the elements of the vector: ";
      for (int i = 0; i < n; ++i) {
        std::cin >> nums[i];
      }
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
  std::vector<int> nums = {1, 2, 3, 4, 4};
  sol->printVector(nums);
  int duplicate = sol->findDuplicateInUnsortedSequence(nums);
  std::cout << duplicate << std::endl;
  return 0;
}

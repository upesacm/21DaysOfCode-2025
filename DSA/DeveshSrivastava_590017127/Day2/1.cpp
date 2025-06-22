#include <iostream>
#include <vector>

using namespace std;

int sumOfEvens(vector<int> &nums) {
  int sum = 0;
  for (int num : nums) {
    if (num % 2 == 0) {
      sum += num;
    }
  }
  return sum;
}

int main() {

  vector<int> nums = {1, 2, 3, 4, 5, 6};
  cout << "Sum of even numbers: " << sumOfEvens(nums) << endl;

  return 0;
}

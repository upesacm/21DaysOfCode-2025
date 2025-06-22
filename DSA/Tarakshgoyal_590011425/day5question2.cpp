#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {9, 6, 4, 2, 3, 5, 7, 0, 1};
    int n = nums.size();
    int expectedSum = (n + 1) * (n + 2) / 2;
    for (int num : nums) {
        expectedSum -= num;
    }
    cout << "Missing number: " << expectedSum - 1 << endl;
    return 0;
}

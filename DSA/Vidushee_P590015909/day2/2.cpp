
#include <iostream>
#include <vector>
using namespace std;

pair<int, int> getFirstAndLast(const vector<int>& nums) {
    if (nums.empty()) {
        throw invalid_argument("Array is empty");
    }
    return {nums.front(), nums.back()};
}

int main() {
    vector<int> nums = {5, 9, 2};
    pair<int, int> result = getFirstAndLast(nums);
    cout << "First: " << result.first << ", Last: " << result.second << endl;
    return 0;
}

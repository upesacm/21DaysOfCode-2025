#include <iostream>
#include <vector>
using namespace std;

pair<int, int> findDuplicateAndMissing(const vector<int>& nums) {
    long long n = nums.size();
    long long sum_n = n * (n + 1) / 2;
    long long sum_n_sq = n * (n + 1) * (2 * n + 1) / 6;

    long long actual_sum = 0, actual_sum_sq = 0;

    for (int num : nums) {
        actual_sum += num;
        actual_sum_sq += 1LL * num * num;
    }

    long long diff = actual_sum - sum_n; // x - y
    long long sq_diff = actual_sum_sq - sum_n_sq; // x^2 - y^2

    long long sum_xy = sq_diff / diff; // x + y

    int x = (diff + sum_xy) / 2;  // duplicate
    int y = x - diff;             // missing

    return {x, y};
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " elements (1 to " << n << " with one duplicate and one missing):\n";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    pair<int, int> result = findDuplicateAndMissing(nums);
    cout << "Duplicate number: " << result.first << endl;
    cout << "Missing number: " << result.second << endl;

    return 0;
}

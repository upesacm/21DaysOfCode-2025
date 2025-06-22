#include <iostream>
#include <vector>
using namespace std;

void reverse(vector<int>& nums, int start, int end) {
    while (start < end) {
        int temp = nums[start];
        nums[start] = nums[end];
        nums[end] = temp;
        start++;
        end--;
    }
}

vector<int> rotateArray(vector<int>& nums, int k) {
    int n = nums.size();
    if (n == 0) return nums;
    k = k % n;

    reverse(nums, 0, n - 1);
    reverse(nums, 0, k - 1);
    reverse(nums, k, n - 1);

    return nums;
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    int k = 2;

    vector<int> result = rotateArray(nums, k);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}

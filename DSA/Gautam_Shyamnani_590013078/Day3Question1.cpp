#include <iostream>
#include <vector>

using namespace std;

int findSum(vector<int> nums, int k) {
    int sum = 0;
    int n = nums.size();

    for (int i = 0; i < n; i++) {
        int count = 0;
        bool isDuplicate = false;

        for (int j = 0; j < n; j++) {
            if (nums[i] == nums[j]) count++;
        }

        if (count == k) {
            for (int m = 0; m < i; m++) {
                if (nums[m] == nums[i]) isDuplicate = true;
            }
            if (!isDuplicate) sum += nums[i];
        }
    }
    
    return sum;
}

int main() {
    vector<int> nums = {2, 3, 9, 9};
    int k = 1;

    cout << findSum(nums, k) << endl;
    return 0;
}

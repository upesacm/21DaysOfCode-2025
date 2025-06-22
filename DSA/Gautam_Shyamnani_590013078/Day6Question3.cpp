#include <iostream>
using namespace std;

int main() {
    int nums[] = {1, 2, 2, 3, 4, 1, 2, 3, 4, 5};
    int n = sizeof(nums) / sizeof(nums[0]);
    int maxLen = 1, currLen = 1;

    for (int i = 1; i < n; i++) {
        if (nums[i] == nums[i - 1] + 1)
            currLen++;
        else
            currLen = 1;

        if (currLen > maxLen)
            maxLen = currLen;
    }

    cout << maxLen;
    return 0;
}

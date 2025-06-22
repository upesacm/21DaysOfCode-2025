#include <iostream>
#include <vector>
using namespace std;

int findUniqueElement(vector<int>& nums) {
    int unique = 0;
    for (int num : nums) {
        unique ^= num;
    }
    return unique;
}

int main() {
    vector<int> nums1 = {4, 1, 2, 1, 2};

    cout << "Unique element : " << findUniqueElement(nums1) << endl;

    return 0;
}


#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

bool areArraysEqual(const vector<int>& nums1, const vector<int>& nums2) {
    if (nums1.size() != nums2.size()) return false;

    unordered_map<int, int> freq1, freq2;
    for (int num : nums1) freq1[num]++;
    for (int num : nums2) freq2[num]++;

    return freq1 == freq2;
}

int main() {
    vector<int> nums1 = {1, 2, 3, 4};
    vector<int> nums2 = {4, 3, 2, 1};
    cout << (areArraysEqual(nums1, nums2) ? "true" : "false") << endl;
    return 0;
}

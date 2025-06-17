#include <iostream>
#include <vector>
using namespace std;
int soe(vector<int>& nums) {
    int sum = 0;
    for (int i=0;i<nums.size();i++) {
        if (nums[i] % 2 == 0) {
            sum += nums[i];
        }
    }
    return sum;
}
int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter " << n << " integers:\n";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    int result = soe(nums);
    cout << "ans " << result << endl;
    return 0;
}

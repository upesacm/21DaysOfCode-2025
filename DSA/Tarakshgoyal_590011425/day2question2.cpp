#include <iostream>
#include <vector>
using namespace std;
void fandl(vector<int>& nums) {
    int first = nums[0];
    int last = nums[nums.size() - 1];
    cout << "First  " << first << endl;
    cout << "Last  " << last << endl;
}
int main() {
    int n;
    cout << "Enter ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter " << n << " integers:\n";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    fandl(nums);
    return 0;
}
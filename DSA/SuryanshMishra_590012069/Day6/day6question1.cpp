#include <iostream>
#include <vector>
using namespace std;

int duplicate(vector<int>& nums) {
    vector<int> freq(nums.size() + 1, 0);
    for(int i : nums) {
        freq[i]++;
    }
    int duplicate = 0;
    for(int i = 0; i < freq.size(); i++) {
        if(freq[i] > 1) {
            duplicate = i;
        }
    }
    return duplicate;
}

int main() {
    vector<int> num = {1, 3, 4, 2, 2};
    cout << duplicate(num) << endl;
    return 0;
}
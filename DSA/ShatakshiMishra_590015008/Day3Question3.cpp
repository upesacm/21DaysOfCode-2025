#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    
    set<int> s;

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
        s.insert(nums[i]);
    }

    if(s.size() < 2)
    {
        cout << -1 << endl;
        return 0;
    }
    
    auto it = s.rbegin();
    cout << *(++it) << endl;
}

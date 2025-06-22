#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    
    set<int> f;
    bool flag = false;
    
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
        if (f.count(nums[i])) {
            flag = true;
        }
        f.insert(nums[i]);
    }
    
    if (flag == true) 
    {
        cout << "true" << endl;
    } 
    else 
    {
        cout << "false" << endl;
    }
}

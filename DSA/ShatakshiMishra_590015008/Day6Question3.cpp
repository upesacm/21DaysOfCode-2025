#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    int nums[n];
    for(int i=0;i<n;i++)
    {
        cin >> nums[i];
    }
    
    int maxLen = 1;
    int currLen = 1;

    if(n==0)
    {
      cout << "Array is empty" << endl;
      return 0;
    }

    for (int i = 1; i < n; ++i) {
        if (nums[i] == nums[i - 1] + 1) {
            currLen++;
            maxLen = max(maxLen, currLen);
        } else {
            currLen = 1;
        }
    }
    
    cout << maxLen << endl;
}

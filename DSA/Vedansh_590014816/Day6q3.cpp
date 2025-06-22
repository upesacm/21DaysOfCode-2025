#include <iostream>
#include <vector>
using namespace std;

int findMaxIncSubArray(vector<int>& arr) {
    if (arr.size() == 0) return 0;

    int max_len = 1; 
    int curr_len = 1;

    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] == arr[i - 1] + 1) {
            curr_len++;
        } else {
            max_len = max(max_len, curr_len);
            curr_len = 1; 
        }
    }

    max_len = max(max_len, curr_len); 
    return max_len;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = findMaxIncSubArray(arr);
    cout << "The maximum length of increasing subarray is: " << result << endl;

    return 0;
}

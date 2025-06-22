#include <iostream>
#include <vector>
using namespace std;

int findDuplicates(vector<int>& arr) {
    int low = 1;
    int high = arr.size() - 1;

    while (low < high) {
        int mid = (low + high) / 2;
        int cnt = 0;

        for (int num : arr) {
            if (num <= mid) cnt++;
        }

        if (cnt > mid) {
            high = mid;
        } else {
            low = mid + 1;
        }
    }

    return low;
}

int main() {
    int n;
    cout << "Enter the number of elements (n + 1): ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements (from 1 to n): ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = findDuplicates(arr);
    cout << "The duplicate is: " << result << endl;

    return 0;
}

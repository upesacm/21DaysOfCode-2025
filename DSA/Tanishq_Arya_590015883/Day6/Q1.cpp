#include <iostream>
#include <algorithm>
using namespace std;

int Duplicate(int* nums, int Size) {
    sort(nums, nums + Size);
    for (int i = 0; i < Size - 1; ++i) {
        if (nums[i] == nums[i + 1]) {
            return nums[i];
        }
    }
    return -1; 
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;   
    int* nums = new int[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    int duplicate = Duplicate(nums, n);
    cout << "Duplicate: " << duplicate << endl;
    
    return 0;
}

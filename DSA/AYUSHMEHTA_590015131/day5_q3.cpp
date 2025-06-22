#include<iostream>
#include<vector>
using namespace std;

bool checkPalindrome(vector<int>& arr, int n) {
    int start = 0;
    int end = n - 1;
    while(start < end) {
        if(arr[start] != arr[end]) 
            return false;
        start++;
        end--;
    }
    return true;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    vector<int> arr(n);
    cout << "Enter the array elements: ";
    for(int i = 0; i < n; i++) 
        cin >> arr[i];

    if(checkPalindrome(arr, n)) 
        cout << "The given array is a palindrome." << endl;
    else 
        cout << "No, the given array is not a palindrome." << endl;

    return 0;
}

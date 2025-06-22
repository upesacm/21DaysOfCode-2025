#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

bool isArrayEqual(vector<int> &arr1, vector<int> &arr2) {
  if (arr1.size() != arr2.size()) {
    return false;
  }
  unordered_map<int, int> freq;
  for (int num : arr1) {
    freq[num]++;
  }
  for (int num : arr2) {
    if (freq.find(num) == freq.end() || freq[num] == 0) {
      return false;
    }
    freq[num]--;
  }
  return true;
}

int main() {

  vector<int> arr1 = {1, 2, 3, 4, 5};
  vector<int> arr2 = {5, 4, 3, 2, 1};
  vector<int> arr3 = {1, 2, 3, 4, 6};

  cout << "Are arr1 and arr2 equal? "
       << (isArrayEqual(arr1, arr2) ? "Yes" : "No") << endl;
  cout << "Are arr1 and arr3 equal? "
       << (isArrayEqual(arr1, arr3) ? "Yes" : "No") << endl;
}

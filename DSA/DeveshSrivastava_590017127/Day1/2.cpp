/**/
/*Missing and Repeated*/
/**/
/*    A problem that*/
/*  requires finding*/
/*a missing number and a duplicate number in an array*/
/*    .*/
/**/
/*    Given an unsorted array of size n.Array elements are in the range of 1 to
 * n*/
/*    .One number from set{1, 2, ... n} is missing and one number occurs twice
 * in*/
/*        the array.The task is to find these two numbers*/
/*    .*/
/**/
/*    Your task : Find the missing number and the number that appears twice in
 * the*/
/* array.Examples*/

#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

void findMissingAndDuplicate(const vector<int> &arr, int &missing,
                             int &duplicate) {
  unordered_set<int> seen;
  for (int num : arr) {
    if (seen.find(num) != seen.end()) {
      duplicate = num;
    } else {
      seen.insert(num);
    }
  }

  for (int i = 1; i <= arr.size(); ++i) {
    if (seen.find(i) == seen.end()) {
      missing = i;
      break;
    }
  }
}

int main() {
  int n;
  cout << "Enter the number of elements in the array: ";
  cin >> n;

  vector<int> arr(n);
  cout << "Enter " << n << " integers (1 to " << n << "): ";
  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
  }

  int missing = -1, duplicate = -1;
  findMissingAndDuplicate(arr, missing, duplicate);

  cout << "Missing:" << missing << endl;
  cout << "Twice " << duplicate << endl;

  return 0;
}

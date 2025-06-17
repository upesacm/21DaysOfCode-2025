#include <iostream>
#include <vector>

using namespace std;

void printVector(const vector<int> &vec) {
  for (const int &num : vec) {
    cout << num << " ";
  }
  cout << endl;
}

void replaceNegative(vector<int> &vec) {
  for (int &num : vec) {
    if (num < 0) {
      num = 0;
    }
  }
}

int main() {

  int n;
  cout << "Enter the number of elements in the vector: ";
  cin >> n;

  vector<int> numbers(n);
  cout << "Enter " << n << " integers (positive or negative): ";
  for (int i = 0; i < n; ++i) {
    cin >> numbers[i];
  }

  replaceNegative(numbers);

  printVector(numbers);

  return 0;
}

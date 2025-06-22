#include <iostream>
#include <vector>

using namespace std;

void enterVector(vector<int> &vec) {
  int n;
  cout << "Enter the number of elements in the vector: ";
  cin >> n;

  vec.resize(n);
  cout << "Enter " << n << " integers:\n";
  for (int i = 0; i < n; ++i) {
    cin >> vec[i];
  }
}

void printVector(const vector<int> &vec) {
  for (const int &num : vec) {
    cout << num << " ";
  }
  cout << endl;
}

void sumVector(const vector<int> &vec, int &sum) {
  sum = 0;
  for (const int &num : vec) {
    sum += num;
  }
}

int main() {
  vector<int> numbers;
  enterVector(numbers);

  int sum = 0;
  sumVector(numbers, sum);

  cout << sum << endl;

  return 0;
}

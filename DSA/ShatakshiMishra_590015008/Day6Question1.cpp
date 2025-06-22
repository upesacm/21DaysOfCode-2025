#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	int nums[n+1];
	int calculated_sum = 0;
	for(int i=0;i<n+1;i++)
	{
	    cin >> nums[i];
	    calculated_sum+=nums[i];
	}
	
	int sum = (n*(n+1))/2;
	
	cout << calculated_sum - sum << endl;

}

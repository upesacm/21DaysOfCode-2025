#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	int nums[n];
	for(int i=0;i<n+1;i++)
	{
	    cin >> nums[i];
	}
	
	bool flag = true;
	for(int i=0;i<n-1;i++)
	{
	    if(nums[i]>=nums[i+1])
	    {
	        flag = false;
	        break;
	    }
	}

    if(flag == true)
    cout << "true" << endl;
    else
    cout << "false" << endl;
}

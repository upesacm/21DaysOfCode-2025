#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	vector<int> v(n);
	for(int i=0;i<n;i++)
	{
	    cin >> v[i];
	}
	
	vector<int> count(n+1,0);
	for(int i=0;i<n;i++)
	{
	    count[v[i]]++;
	}
	
	int d = 0;
	int m = 0;
	
	for(int i=1;i<=n;i++)
	{
	    if(count[i] == 0)
	    {
	        m = i;
	    }
	    else if(count[i] == 2)
	    {
	        d = i;
	    }
	}

    cout << "Missing: " << m << "," << " " << "Twice: " << d;
}

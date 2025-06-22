#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int nums[n];
    for(int i=0;i<n;i++)
    {
        cin >> nums[i];
    }
    
    int i = 0;
    int j = n-1;
    bool flag = true;
    while(i<=j)
    {
        if(nums[i] == nums[j])
        {
            i++;
            j--;
        }
        else
        {
            flag = false;
            break;
        }
    }
    if(flag == false)
    cout << "false" << endl;
    else
    cout << "true" << endl;
}

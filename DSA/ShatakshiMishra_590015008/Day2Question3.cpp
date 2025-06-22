#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> nums1(n);
    for(int i=0;i<n;i++)
    {
        cin >> nums1[i];
    }
    
    int m;
    cin >> m;
    vector<int> nums2(m);
    for(int i=0;i<m;i++)
    {
        cin >> nums2[i];
    }
    
    if(n!=m)
    {
        cout << "false";
    }
    else
    {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        bool flag = true;
        for(int i=0;i<n;i++)
        {
            if(nums1[i] != nums2[i])
            {
                flag = false;
                break;
            }
        }
        if(flag == false)
        cout << "false";
        else
        cout << "true";
    }
}

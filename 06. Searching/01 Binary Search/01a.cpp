#include<bits/stdc++.h>
using namespace std;

//time: O(logn)
int binarySearch(vector<int> nums,int key)
{
    int n=nums.size();
    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (nums[mid] == key)
        {
            return mid;
        }
        else if (nums[mid] > key)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    return -1;
}

int main()
{
    vector<int> nums={1,2,3,4,5,6};

    cout<<"indis of num: "<<binarySearch(nums,2)<<endl;
    return 0;
}
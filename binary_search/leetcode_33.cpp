// 33. Search in Rotated Sorted Array
#include<vector>


class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low=0,high=nums.size()-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(nums[mid]==target)
            return mid;
            //check if array is left sorted
            if(nums[mid]>=nums[low])
            {
                if(nums[mid]>=target && nums[low]<=target)
                high=mid-1;
                else
                low=mid+1;
            }
            //check if array is rigt sorted
            else
            {                
                if(nums[mid]<=target && nums[high]>=target)
                low=mid+1;
                else
                high=mid-1;
            }
        }
        return -1;
    }
};
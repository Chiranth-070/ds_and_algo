// 26. Remove Duplicates from Sorted Array

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0,j=1;
        while(j<nums.size())
        {
            if(nums[i]==nums[j])
            j++;
            else
            {
                nums[++i]=nums[j];
                j++;
            }
        }
        return i+1;
    }
};
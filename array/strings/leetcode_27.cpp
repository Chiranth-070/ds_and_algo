// 27. Remove Element

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> spare;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==val)
            continue;
            else
            spare.push_back(nums[i]);
        }
        nums=spare;
        return nums.size();
    }
};
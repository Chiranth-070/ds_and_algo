// 189. Rotate Array

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k=k%n;
        if(n==1)
        return;
        vector<int> spare1, spare2;
        for (int i = n - k; i < n; i++)
            spare1.push_back(nums[i]);

        for (int i = 0; i < n - k; i++) // Change <= to <
            spare2.push_back(nums[i]);

        for(int i=0;i<k;i++)
        nums[i]=spare1[i];

        for(int i=k;i<n;i++)
        nums[i]=spare2[i-k]; 
    }
};
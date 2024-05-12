// 45. Jump Game II

class Solution {
public:
    int jump(vector<int>& nums) {
        int jumpCount = 0;
        int destination = nums.size() - 1;
        int lastJumpIndex = 0, coverage = 0;

        for(int i=0; i<nums.size()-1 ; i++)
        {
            coverage = max(coverage , i+nums[i]);

            if( lastJumpIndex == i )
            {
                lastJumpIndex = coverage;
                jumpCount++;

                if(coverage >= destination)
                return jumpCount;
            }
        }
        return jumpCount; 
    }
};
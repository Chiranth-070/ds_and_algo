 //167. Two Sum II - Input Array Is Sorted

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i=0,j=numbers.size()-1; //using two pointer approach
        while(i < j)
        {
            int sum=numbers[i]+numbers[j];
            if(sum == target)
            return {++i,++j};
            else if(sum < target)
            i++;
            else
            j--;
        }
        return {};
    }
};
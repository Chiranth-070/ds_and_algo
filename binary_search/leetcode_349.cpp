//349. Intersection of Two Arrays

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int i=0,j=0;
        set<int> ans={};  //create empty set to store result
        //sort both the arrays
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        
        //use two pointer approach
        while(i<nums1.size() && j<nums2.size())
        {
            if(nums1[i]<nums2[j])
            i++;
            else if(nums1[i]>nums2[j])
            j++;  
            else
            {
                ans.emplace(nums1[i]);
                i++;
                j++;
            }           
        }
        
        //since vector should be returned -create an empty vector and copy contents from set to vector
        vector<int> result;
        for(auto it:ans)
        {
            result.push_back(it);
        }
        return result;
    }
};
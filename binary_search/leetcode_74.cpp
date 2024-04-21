// 74. Search a 2D Matrix

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows=matrix.size();         //finding number of rows
        int cols=matrix[0].size();      //finding number of columns
        int low=0,high=(rows*cols)-1;   //high points to last element of matrix

        while(low<=high)
        {
            int mid=(low+high)/2;       
            
            //converting 1d index to 2d index
            int m=mid/cols;          
            int n=mid%cols;
            if(matrix[m][n] == target)
            return true;
            if(matrix[m][n] <= target)
            low=mid+1;
            else
            high=mid-1;
        }
        return false;
    }
};
//69. finding sqrt(x) without using built-in function


class Solution {
public:
    int mySqrt(int x) {
        long long low = 1, high = x;
        int ans = 0;
        //using binary search
        while (low <= high) {
            long long mid = (low + high) / 2;
            if (mid * mid <= (long long)(x)) {
                ans = mid;
                low = mid + 1;          
            } else
                high = mid - 1;
        }
        return ans;
    }
};
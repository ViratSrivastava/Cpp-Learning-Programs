// https://leetcode.com/problems/sqrtx

class Solution {
public:
    int mySqrt(int x) {
        /*
        long i = 1;
        while(i * i <= x){
            i++;
        }
        return i-1;
        */
        long l = 1;
        long r = x;
        while (l <= r) {
            long long mid = l + (r - l) / 2;
            if (mid * mid <= x && (mid + 1) * (mid + 1) > x) {
                return mid;
            }
            if (mid * mid > x) {
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        return 0;
    }
};
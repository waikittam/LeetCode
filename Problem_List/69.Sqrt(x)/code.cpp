class Solution {
public:
    int mySqrt(int x) {
        if(x == 0 || x == 1) return x;

        int low = 0; 
        int high = x;
        int mid;
        int result = 0;

        while(high >= low){
            mid = low + (high - low)/2;
            long long midSquared = (long long)mid * mid;

            if(midSquared == x){
                return mid;
            }else if(midSquared > x){
                high = mid - 1;
            }else{
                low = mid + 1;
                result = mid;
            }
        }

        return result;
    }
};
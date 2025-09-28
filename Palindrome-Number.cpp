class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0){
            return false;
        }
        else {
            int num = x;
            int reverse = 0;
            while (num != 0){
                int n = num % 10;
                if (reverse > (INT_MAX - n) / 10){
                    return false;
                }
                reverse = reverse * 10 + n;
                num /= 10;
            }
            return x == reverse ? true : false;
        }
    }
};
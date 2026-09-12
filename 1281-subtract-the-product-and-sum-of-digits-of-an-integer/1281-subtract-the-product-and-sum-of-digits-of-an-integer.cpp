class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum = 0;
        int product = 1;
        int val = n;
        while (n > 0) {
            int digit = n % 10;
            sum += digit;
            n /= 10;
        }
        while (val > 0) {
            int digit = val % 10;
            product *= digit;
            val /= 10;
        }
        return product - sum;
    }
};
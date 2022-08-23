class Solution {
public:
    int subtractProductAndSum(int n) {
        int a = n, prod = 1, sum = 0;
        while(a > 0) {
            prod *= a % 10;
            a /= 10;
            if(prod == 0) break;
        }
        a = n;
        while(a > 0) {
            sum += a % 10;
            a /= 10;
        }
        return prod - sum;
    }
};
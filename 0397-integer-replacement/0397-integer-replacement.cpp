class Solution {
public:
    int func(long long n) {
        if (n == 1) return 0;  // Base case: 0 operations to make 1
        
        if (n % 2 == 0) {
            return 1 + func(n / 2);  // If divisible by 2, divide and add 1 operation
        } else {
            // If odd, try both n + 1 and n - 1 and take the minimum
            return 1 + min(func(n + 1), func(n - 1));
        }
    }

    int integerReplacement(int n) {
        return func((long long)n);  // Casting to long long to avoid overflow
    }
};

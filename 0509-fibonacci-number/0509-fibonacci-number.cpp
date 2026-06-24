class Solution {
public:
    int fib(int n) {
        if(n<=1) return n;
        int k1 = fib(n-1);
        int k2 = fib(n-2);

        return k1+k2;
    }
};
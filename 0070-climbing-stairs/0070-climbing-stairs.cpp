class Solution {
public:
    int climbStairs(int n) {
    // edge case 
    if(n<=2) return n;

    int pp = 1; 
    int p = 2;
    for(int i =3;i<=n;i++){
        int current = pp+p;

        pp = p; 
        p = current;
    }
    return p;
        
    }
};
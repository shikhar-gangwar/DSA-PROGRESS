class Solution {
public:
  int countGoodRotations(vector<int>& nums) {
    int n = nums.size();
    long long ans = 0; 
    int mid = n/2;
    long long  right_sum = 0;long long left_sum = 0;
     // calculates right_sum & left_sum
    for(int i = 0; i < mid; i++) {
    left_sum += nums[i];
}

for(int i = mid; i < n; i++) {
    right_sum += nums[i];
}
    for(int i = 0;i<n;i++){

        if(left_sum > right_sum){
            ans += 1;
        }

        left_sum = left_sum + nums[(i + mid) % n] - nums[i];
        right_sum = right_sum + nums[i] - nums[(i + mid) % n];
        
        }

        return ans;
    
    }
};
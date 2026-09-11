class Solution {
public:
    int minStartValue(vector<int>& nums) {
        
        int running_sum = 0;
        int min_sum = 0;
      for(int i = 0; i < nums.size(); i++) {
            running_sum += nums[i];
            min_sum = min(min_sum, running_sum);
        }  
        return 1-min_sum;
    }
};
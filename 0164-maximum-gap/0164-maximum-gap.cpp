class Solution {
public:
    int maximumGap(vector<int>& nums) {

        sort(nums.begin(),nums.end());

        int max_gap = 0;

        for(int i = 1;i<nums.size();i++){

            max_gap = max(max_gap,(nums[i]-nums[i-1]));
        }

        return max_gap;        
    }
};
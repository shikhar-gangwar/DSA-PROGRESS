class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        
      
        int set = 0;
        int n = nums.size();
        vector <int> res;
        
        for(int i = 0; i<n;i++){
              int count = 0 ; 
            for(int j  = 0;j<nums.size();j++){

                if(nums[i] >nums[j]){
                    count++;
                }
                
            }
            res.push_back(count);
        }
        return res;

    }
};
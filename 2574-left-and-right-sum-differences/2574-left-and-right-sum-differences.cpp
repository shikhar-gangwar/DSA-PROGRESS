class Solution {
public:
   vector<int> leftRightDifference(vector<int>& nums) {
    int n = nums.size();
    int totalsum = 0;

    

    for(int num:nums){
        totalsum += num;
    }
    vector<int> res; 
    int lsum = 0; int rsum = 0;

    for(int i= 0;i<n;i++){
        rsum = totalsum - lsum -nums[i];
        res.push_back(abs(lsum-rsum));
        lsum +=nums[i];
    }
    return res;


    // int lsum = 0; int rsum = 0;
    // vector<int> res;

    
    // for(int i = 0;i<n;i++){

    //     lsum += nums[i];
    //     rsum += nums[n-i];

    //     res.push_back(abs(lsum-rsum));
    // }
    // return res;
}
};
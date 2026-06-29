class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {

    int n  = nums.size();
    int count = 0;

    vector <int> ans;
    ans.reserve(2*n); // it will reserve the memory without allocation of any int 

    for( int i = 0 ; i < 2*n;i++){
        ans.push_back(nums[count%n]);
        count++;
    }
    return ans;
        
}
};
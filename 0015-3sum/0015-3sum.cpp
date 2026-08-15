class Solution {
public:
      vector<vector<int>> threeSum(vector<int>& nums) {

    vector<vector<int>> ans;
    int n = nums.size();
   sort(nums.begin(),nums.end());
  

   for ( int i = 0 ; i < n ; i ++){
     int lp = i+1 ; int rp = n-1;

    if(i >0 && nums[i] == nums[i-1]) continue;

    while ( lp< rp){

    if(nums[i] +nums[lp]+nums[rp] == 0){
     ans.push_back({nums[i],nums[lp],nums[rp]});

     while ( lp<rp && nums[lp] == nums[lp+1]) lp++;
     while (lp <rp &&nums[rp] == nums[rp-1] ) rp--;

     lp++;
     rp--;
    }   

    else if( nums[i] +nums[lp]+nums[rp] >0){
      rp--;
    }
    
     else if( nums[i] +nums[lp]+nums[rp] < 0){
      lp++;
    }
   }
   
  }
  return ans;
  }

};
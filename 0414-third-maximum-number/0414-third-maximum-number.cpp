class Solution {
public:
   
 int thirdMax(vector<int>& nums) {

    int n = nums.size();
    int count = 1;


    

    sort(nums.begin(),nums.end());
          int prev = nums[n-1];


    // if ( n < 3) return (nums[n-1]);  // agar size 3 se kam ho 


    for(int i = n-2;i>=0;i--){


  if(nums[i] !=prev){
    count++;
  }

        prev = nums[i];


  if(count == 3) return nums[i];

        
    } 
    return nums[n-1];
        
    }
};
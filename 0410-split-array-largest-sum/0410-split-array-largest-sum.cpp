class Solution {
public:

// allocated hoga aur kya vo possible hai mid ki condition ke saath
   bool allocation(int barrier,vector<int>nums,int k){
    int n = nums.size();
    int allocated = 1,pages = 0;
    for(int i = 0;i<nums.size();i++){
        if(nums[i] > barrier) return false;
        if(pages+nums[i] > barrier){
            allocated += 1;
            pages = nums[i];
        }
        else { 
            pages += nums[i];
        }
    }
    if(allocated >k) return false;
    else return true;
}

// simple binary 
 int splitArray(vector<int>& nums, int k) {
    int high = 0;

    int low = *max_element(nums.begin(),nums.end());
    for(int i = 0;i<nums.size();i++ ){
        high += nums[i];
    }

    while (low<=high){

        int mid = low+(high-low)/2;

        if(allocation(mid,nums, k) == true){ 
            high = mid-1;
        }
        else { 
            low = mid+1;
        }
    }
    return low;       
}
};
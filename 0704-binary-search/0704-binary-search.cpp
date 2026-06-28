class Solution {
public:
    int binarysearch(vector<int>& nums, int target,int low,int high){
        if(low>high)
         return -1;

        int mid = (high+low)/2;

        if(nums[mid] == target){
            return mid;
        }
        else if(target < nums[mid]){
            return binarysearch( nums,  target, low, mid-1);
        }
        else {
            return binarysearch( nums,  target, mid+1, high);

        }

    }
    int search(vector<int>& nums, int target) {
        return binarysearch( nums,  target ,  0 , nums.size()-1);
        
    }
};
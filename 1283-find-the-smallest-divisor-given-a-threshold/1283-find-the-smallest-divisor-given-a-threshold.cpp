class Solution {
public:
    bool divisor(vector <int> &nums,int mid,int threshold){

    int a = 0;
    for(int i = 0 ;i<nums.size();i++){
         a += (nums[i]+mid-1)/mid;        
    }
     if(a <=threshold){
            return true;

        }
    return false;
  }



  int smallestDivisor(vector<int>& nums, int threshold) {
    int low = 1; 
    int high = *max_element(nums.begin(),nums.end());
    int ans =-1;

    while (low<=high){

        int mid = low+(high-low)/2;

        if(divisor(nums,mid,threshold) == true){
            high =mid-1;
        }
        else { 
            low = mid+1;
        }
    }
    return low;
}
};
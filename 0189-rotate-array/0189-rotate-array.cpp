class Solution {
public:

// for swapping number or reverse(nums.begin(),nums.end()) aise karle 
    void reverseArray(vector<int>& nums, int left, int right) {
        while (left < right) {
            swap(nums[left], nums[right]);
            left++;
            right--;
        }
    }

    // actual reversal of array or shift by k 

    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k %= n;

        reverseArray(nums, 0, n - 1);
        reverseArray(nums, 0, k - 1);
        reverseArray(nums, k, n - 1);
    }
};
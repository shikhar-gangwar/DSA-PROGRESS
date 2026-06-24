class Solution {
public:
    int differenceOfSum(vector<int>& nums) { 
         int totalElementsSum = 0;
    int totalDigitsSum = 0;

    for (int num : nums) {
        totalElementsSum += num;
        int temp = abs(num);
        while (temp > 0) {
            totalDigitsSum += temp % 10;
            temp /= 10;
        }
    }

    return abs(totalElementsSum - totalDigitsSum);
               
        
    }
};
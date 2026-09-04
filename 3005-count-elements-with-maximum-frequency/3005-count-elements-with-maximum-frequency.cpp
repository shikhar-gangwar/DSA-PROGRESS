class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
vector <int> temp(101);

    int maxFreq = 0; 
    int total = 0; 

    for(int &num:nums){
        temp[num]++;

        int freq = temp[num];

        if(freq > maxFreq){
             maxFreq = freq;
             total = maxFreq;
        }

        else if (maxFreq == freq){
            total += maxFreq;
        }
        
         
    }
    return total;
    }
};
class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {

    vector<int> temp(101);
    int maxfreq = 0;

    for(int &num :nums){

        temp[num]++;
        maxfreq = max(maxfreq,temp[num]);
    }
    int result = 0;
    for(int i = 0;i<temp.size();i++){
        if(temp[i] == maxfreq) result += maxfreq;
    }

    return result;
    }
};
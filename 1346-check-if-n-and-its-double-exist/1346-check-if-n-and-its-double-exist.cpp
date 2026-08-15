class Solution {
public:
         bool checkIfExist(vector<int>& arr) {
        
        unordered_set<int> seen;
        int num;

        for(int i = 0 ; i < arr.size();i++){
            num = arr[i]
;
            if(seen.count(2*num)||(num%2 == 0 && seen.count(num/2))){
                return true;
            }
            seen.insert(num);            
        }
        return false;
    }

};
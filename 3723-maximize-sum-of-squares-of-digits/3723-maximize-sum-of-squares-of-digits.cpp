class Solution {
public:
    string maxSumOfSquares(int num, int sum) {

        if ( sum > 9*num || sum <= 0  ){
            return "";
        }

        int rs = sum ; 

        string result = ""; 

        for(int i = 0 ; i <num;i++){  

            int k = min(rs,9); 

            result+= to_string(k);

            rs-=k;
        }
       
        return result;        
    }
};
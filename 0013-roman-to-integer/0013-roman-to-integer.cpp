class Solution {
public:
int getValue(char c) {
    switch(c) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return 0;
    }
}

    int romanToInt(string s) {  
        int total = 0; 
        int n = s.length();

        for(int i = 0;i<n;i++){
            if(i+1< n && getValue(s[i])< getValue(s[i+1])){
                total -= getValue(s[i]);
            }
            else{
                total += getValue(s[i]);
            }
        }
        return total;
//         std::unordered_map<char, int> mpp = {
//     {'I', 1}, 
//     {'V', 5}, 
//     {'X', 10}, 
//     {'L', 50}, 
//     {'C', 100}, 
//     {'D', 500}, 
//     {'M', 1000}
// };
       
            
    }
};
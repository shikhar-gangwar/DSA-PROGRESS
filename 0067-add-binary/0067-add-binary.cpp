class Solution {
public:
   string addBinary(string a, string b) {
    string res = "";

    int carry = 0; 
    int i = a.length()-1; int j = b.length()-1;

    while ( i >= 0 || j >=0|| carry>0){
        int total = carry;

        if(i >= 0){
            total += a[i] -'0';
            i--;
        }
        if( j >= 0){
            total += b[j] - '0';
            j--;
        }

        res += to_string(total%2);
    
    carry =  total /2;

    }
    reverse(res.begin(),res.end());
    return res;
        
    }
};
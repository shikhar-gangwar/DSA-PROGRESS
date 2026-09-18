class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n = s.size();

        int bp = 0; int mp = 0; int ans = 0; 

        int freq[26] = {0};

        while (mp < n) {  // mp will be our moving pointer 

        freq[s[mp] - 'a']++;

        while ( freq[s[mp]-'a'] > 2){
            freq[s[bp]-'a']--;
            bp++;
        }

        ans = max(ans,mp -bp +1);
        mp++;

        }
        return ans;
        
    }
};
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> map;
        
        for (const string& word : strs) {
            string count_key = string(26, 0);
            for (char c : word) {
                count_key[c - 'a']++;
            }
            map[count_key].push_back(word);
        }
        
        vector<vector<string>> result;
        for (auto& pair : map) {
            result.push_back(pair.second);
        }
        return result;
    
        
    }
};
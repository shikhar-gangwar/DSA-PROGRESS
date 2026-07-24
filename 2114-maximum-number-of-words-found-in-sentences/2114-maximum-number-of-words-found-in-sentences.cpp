class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        
        int ans = 0;

        int space;

        for(int i = 0 ;i <sentences.size();i++){

            space = count(sentences[i].begin(), sentences[i].end(), ' ');
             ans = max(ans,space+1);




        }
        return ans;
        
    }
};
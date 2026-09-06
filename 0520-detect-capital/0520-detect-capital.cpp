class Solution {
public:
  bool detectCapitalUse(string word) {
        int count = 0; 
        int n = word.size();
        for(int i= 0;i<word.size();i++){
            if( isupper(char(word[i]))) count++;
        }   
        
        if( count == n 
        || count == 0
        || count == 1 && isupper(char(word[0]))){
            return true;
        }
        return false ;
    }
};
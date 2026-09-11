class Solution {
public:
 bool detectCapitalUse(string word) {
    int n = word.size(); 
    int count = 0 ; 

    for(int i = 0 ;i <n;i++){
        if (isupper(char(word[i]))) count++;        
    }
    if(count == n ||
    count == 0 || 
    count == 1 && isupper(char(word[0]))){
        return true;
    }
    return false;
       
    }
};
class Solution {
public:
   string reverseWords(string s) {
    string ans ="";

   stack <string> st;
   int i = 0;
   string word = "";

   while(i < s.size()){
   
    if(s[i] != ' '){
        word += s[i];
        i++;
        
    }
    else if(word.size() == 0) i++;
    else { 
     
        st.push(word);
        word ="";
        i++;
    
}
    
  }
 if(!word.empty()) st.push(word);

   
  while (st.size() >0){
    ans += st.top();
    st.pop();
if(!st.empty()){
    ans +=' ';
}  }
  return ans;

}
};
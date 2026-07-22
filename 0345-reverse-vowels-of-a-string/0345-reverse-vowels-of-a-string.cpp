class Solution {
public:
   bool isVowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}
// string reverseVowels(string s) {
//         vector <char> vowel ={};

//         for(int i = 0; i < s.length();i++){

//             if(isVowel(s[i]) == 1) 
//             vowel.push_back(s[i]);

//         }

// reverse(vowel.begin(),vowel.end());
// int x = 0;
//   for(int i = 0; i < s.length();i++){

//             if(isVowel(s[i])) {
//                 s[i] = vowel[x];
//                 x++;
//             }

//         }
//         return s;


    // }
    string reverseVowels(string s) {
    int left = 0 ; 
    int right = s.size()-1;
        
   
while (left < right) {
    if (!isVowel(s[left])) {
        left++;
    }
    else if (!isVowel(s[right])) {
        right--;
    }
    else {
        swap(s[left], s[right]);
        left++;
        right--;
    }
}
    return s;
    }

};
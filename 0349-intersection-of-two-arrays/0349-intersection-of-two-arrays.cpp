class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    vector<int> ans;
    

    int n1 = nums1.size();
    int n2 = nums2.size();

    unordered_set<int> st(nums1.begin(),nums1.end());

    for(int i = 0 ; i < nums2.size();i++){
       if (st.find(nums2[i]) != st.end()) {
    ans.push_back(nums2[i]);
    st.erase(nums2[i]);   // duplicate se bachne ke liye
}
    
}
return ans;
    }
};
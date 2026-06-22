class Solution {
public:
    int calPoints(vector<string>& operations) {
    vector <int> ans(0,operations.size());
    int sum = 0;

    for ( int i = 0 ; i <operations.size();i++){ 
        
        if (operations[i] == "D") {
    ans.push_back(2 * ans.back());
    }    

       else  if(operations[i] == "C"){
        ans.pop_back();
       }
       else if(operations[i] == "+"){
        ans.push_back(ans[ans.size()-1] + ans[ans.size()-2]);
       }
       else { 
        ans.push_back(stoi(operations[i]));
       }

    }
    for ( int i = 0 ; i < ans.size();i++){

        sum +=ans[i];

    }
    return sum;
}
};
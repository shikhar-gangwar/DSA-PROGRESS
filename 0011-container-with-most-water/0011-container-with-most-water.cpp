class Solution {
public:
    int maxArea(vector<int> &hieght){
    int n = hieght.size();
    int ans = 0;
    int left = 0;
    int right = n-1;
    while ( left < right){
       int  w = right-left;
       int ht = min(hieght[left],hieght[right]);
       
       ans = max(ans,(ht*w));
       if(hieght[left] < hieght[right]){
        left++;
       }
       else if ( hieght[left]>hieght[right]){
        right--;
       }
       else{
        right--;
       }
    }
    return ans;
}
};
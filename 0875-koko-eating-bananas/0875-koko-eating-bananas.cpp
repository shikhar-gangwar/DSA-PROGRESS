class Solution {
public:
   
int findmax(vector<int> &piles){
   return *max_element(piles.begin(), piles.end());
}

long long calculatetotalhours(vector<int> &piles,int h){
    long long totalh = 0; 
    int v = piles.size();
    for(int i = 0 ; i < v;i++){
        totalh += ceil((double) piles[i]/(double)h);
    }
    return totalh;
}

int minEatingSpeed(vector<int>& piles, int h) {
    int n = piles.size();
    int low = 1; 
    int high = findmax(piles);
    while ( low <= high){

        int mid = low+(high-low)/2;
        long long totalh = calculatetotalhours(piles,mid);

        if(totalh<=h){
            high = mid-1;
        }
        else { 
            low = mid+1;
        }
    }
    return low;
        
}
};
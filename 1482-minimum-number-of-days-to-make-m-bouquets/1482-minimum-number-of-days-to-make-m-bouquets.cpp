class Solution {
public:
    bool possible( vector <int> &bloomDay ,int day,int m ,int k){
    int cnt = 0 ; 
    int b = 0; 

    for(int i = 0 ; i < bloomDay.size();i++){
        if(bloomDay[i] <= day){
            cnt++;
        }
        else { 
            b += (cnt/k);
            cnt = 0;
        }
    }
     b += (cnt/k);
     if(b>=m) return true;
     else return false;
}

int minDays(vector<int> &bloomDay,int m,int k){

    
    int n = bloomDay.size();
    

    if((long long)m*k > n) return -1;

    int low = *min_element(bloomDay.begin(),bloomDay.end());
    int high = *max_element(bloomDay.begin(),bloomDay.end());

    int ans = high;

    while ( low <= high){
        int mid = low+(high-low)/2;

        if(possible(bloomDay,mid,m,k) == true){
            ans = mid;
            high = mid-1;
        }
        else {
            low = mid+1;
        }
       
    }
     return low;
}
};
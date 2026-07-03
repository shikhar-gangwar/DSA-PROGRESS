class Solution {
public:
   int daysrequired(vector <int> &weights,int capactiy){

    int n = weights.size();
    int day = 1; 
    int load = 0 ;

    for (int i = 0 ;i< n;i++){
        if(load+weights[i] > capactiy){
            day = day+1;
            load = weights[i];
        }
        else { 
            load += weights[i];
        }
    }
            return day;


}

int total_sum(vector <int>weights){

    int sum = 0 ; 

    for (int i = 0 ; i < weights.size();i++){
        sum += weights[i];    
    }
    return sum;
}
 int shipWithinDays(vector<int>& weights, int days) {

    int n = weights.size(); 

    int low = *max_element(weights.begin(),weights.end());

    int high =  total_sum(weights);

    while (low<= high){

        int mid = low+(high-low)/2;

        int day = daysrequired(weights,mid);

        if(day <= days){
            high = mid-1;
        }
        else { 
            low = mid+1;
        }
    }
    return low;
        
}
};
class Solution {
public:
   bool isPossible(vector<int>& citations, int h) {
    int count = 0;

    for (int i = 0; i < citations.size(); i++) {
        if (citations[i] >= h)
            count++;
    }

    return count >= h;
}

int hIndex(vector<int>& citations) {
    int n = citations.size();
    int low = 0;
    int high = n;
    int ans = 0;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (isPossible(citations, mid)) {
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return ans;
}
};
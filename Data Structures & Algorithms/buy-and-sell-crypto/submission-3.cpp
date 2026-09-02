class Solution {
public:
    int maxProfit(vector<int>& prices) {
            int left = 0;
    int right = prices.size();
    int max_prof=0;
    for (int i = 0 ;i<prices.size();i++){
        for (int j =i+1;j<prices.size();j++){
            int profit = prices[j]-prices[i];
            max_prof = max(max_prof,profit);
        }
    }
    return max_prof;
    }
};

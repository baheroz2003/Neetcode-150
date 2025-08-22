class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=INT_MAX;
        int maxi=INT_MIN;
        int cost=0;
        for(int i=0;i<prices.size();i++){
            mini=min(mini,prices[i]);
            cost=prices[i]-mini;
            maxi=max(maxi,cost);
        }
        return maxi;
    }
};

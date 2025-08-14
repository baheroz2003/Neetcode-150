class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int maxi=0;
        // int cnt=0;
        unordered_set<int>st(nums.begin(),nums.end());
        for(auto it:st){
            if(st.find(it-1)==st.end()){
                int x=it;
                int cnt=1;
                while(st.find(x+1)!=st.end()){
                    x++;
                    cnt++;
                }
                maxi=max(maxi,cnt);
            }
        }
        return maxi;
    }
};
////
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;

        sort(nums.begin(), nums.end());
        int cnt = 1;
        int maxi = 1;  // should start from 1
        int i = 0;

        while(i < nums.size() - 1) {
            if(nums[i+1] == nums[i]) {
                i++;
            } 
            else if(nums[i+1] == nums[i] + 1) {
                cnt++;
                maxi = max(maxi, cnt);
                i++;
            } 
            else {
                cnt = 1;
                i++;
            }
        }

        return maxi;
    }
};


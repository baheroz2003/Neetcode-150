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

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0;
        int r=0;
        int n=s.size();
        map<int,int>mpp;
        int maxi=0;
        while(r<s.size()){
            mpp[s[r]]++;
            while(mpp[s[r]]>1){
                mpp[s[l]]--;
                l++;
            }
            // r++;
            maxi=max(maxi,r-l+1);
            r++;
        }
        return maxi;
    }
};

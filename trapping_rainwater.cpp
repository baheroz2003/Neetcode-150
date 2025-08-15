class Solution {
public:
    int trap(vector<int>&h) {
        int n=h.size();
        vector<int>prefix(n);
        vector<int>suffix(n);
        prefix[0]=h[0];
        for(int i=1;i<n;i++){
            prefix[i]=max(prefix[i-1],h[i]);  
        }
        suffix[n-1]=h[n-1];
        for(int i=n-2;i>=0;i--){
            suffix[i]=max(suffix[i+1],h[i]);
        }
        int ans=0;
        for(int i=0;i<h.size();i++){
            ans+=abs((h[i])-(min(prefix[i],suffix[i])));
        }
        return ans;  
    }
};

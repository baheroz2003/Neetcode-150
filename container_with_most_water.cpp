class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxi=0;
        int i=0;
        int j=heights.size()-1;
        while(i<j){
            int w=j-i;
            int h=min(heights[i],heights[j]);
            int area=w*h;
            maxi=max(maxi,area);
            if(heights[i]>heights[j]){
                j--;
            }
            else{
                i++;
            }
        }
       return maxi; 
    }
};

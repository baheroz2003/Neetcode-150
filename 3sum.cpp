class Solution {
public:
    vector<vector<int>>ans;
    void twosum(vector<int>&nums,int target,int i,int j)
    {
       while(i<j)
        {
             int sum=nums[i]+nums[j];
            if(sum>target)
            {
                j--;
            }
            else if(sum<target)
            {
              i++;
            }
            else
            {
                ans.push_back({nums[i],nums[j],-target});
                while(i<j && nums[i]==nums[i+1])
                {
                    i++;
                }
                 while(i<j && nums[j]==nums[j-1])
                {
                    j--;
                }
                i++;
                j--;
            }
        }
    }
vector<vector<int>> threeSum(vector<int>& nums) {
    int n=nums.size();
    sort(nums.begin(),nums.end());
 for(int i=0;i<nums.size()-2;i++){
            if(i>0 && nums[i]==nums[i-1])continue;
            int n1=nums[i];
            int target=-n1;
            twosum(nums,target,i+1,n-1);
        }
        return ans;  
    }
};

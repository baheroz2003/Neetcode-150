//brute
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int cntz = count(nums.begin(), nums.end(), 0);
        vector<int> ans(nums.size(), 0);

        if (cntz == nums.size()) return ans;

        if (cntz == 0) {
            long long pe = 1;
            for (int x : nums) pe *= x;
            for (int i = 0; i < nums.size(); i++) ans[i] = pe / nums[i];
        }
        else if (cntz == 1) {
            long long pe = 1;
            for (int i = 0; i < nums.size(); i++)
                if (nums[i] != 0) pe *= nums[i];
            for (int i = 0; i < nums.size(); i++)
                if (nums[i] == 0) ans[i] = pe;
        }

        return ans;
    }
};

//optimized
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, 1);

        // Prefix product
        int prefix = 1;
        for (int i = 0; i < n; i++) {
            ans[i] = prefix;
            prefix *= nums[i];
        }

        // Suffix product
        int suffix = 1;
        for (int i = n - 1; i >= 0; i--) {
            ans[i] *= suffix;
            suffix *= nums[i];
        }

        return ans;
    }
};

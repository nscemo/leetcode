class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int *dp = new int[n];
        int largest = nums[0];
        dp[0] = nums[0];
        for(int i=1;i<nums.size();i++)
        {
            dp[i] = max(dp[i-1]+nums[i],nums[i]);
            largest = max(dp[i],largest);
        }
        return largest;
    }
};

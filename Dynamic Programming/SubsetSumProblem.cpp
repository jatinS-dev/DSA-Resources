class Solution {
public:
    bool isSubsetSum(vector<int> arr, int n, int sum) {
        int dp[n+1][sum+1];

        for (int i = 0; i <= n; i++) {
            dp[i][0] = true;
        }

        for (int j = 1; j <= sum; j++) {
            dp[0][j] = false;
        }

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= sum; j++) {
                if (arr[i-1] <= j) {
                    dp[i][j] = dp[i-1][j - arr[i-1]] || dp[i-1][j];
                }
                else {
                    dp[i][j] = dp[i-1][j];
                }
            }
        }

        return dp[n][sum];
    }

    bool canPartition(vector<int>& nums) {
        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
        }
        
        if (sum % 2 != 0) {
            return false;
        }
        
        sum /= 2;
        return isSubsetSum(nums, nums.size(), sum);
    }
};

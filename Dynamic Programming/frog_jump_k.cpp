#include <bits/stdc++.h> 
int frogJump(int n, vector<int> &heights) {
    vector<int> dp(n, -1);
    dp[0] = 0;
    for(int i = 1; i < n; i++) {
        int minStep = INT_MAX;
        for(int j = 1; j <= k; j++) {
            if((i-j)> 0) {
                 int mini = dp[i-j] + abs(heights[i]-heights[i-j]); 
            }           
        }
        minStep = min(mini, minStep);
    }
    return dp[n-1];
}

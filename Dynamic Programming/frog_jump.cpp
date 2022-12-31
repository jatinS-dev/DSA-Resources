#include <bits/stdc++.h> 

int f(int index, vector<int> &heights, vector<int> &dp) {
    if(index == 0) return 0;
    
    if(dp[index] != -1) return dp[index];
    
    int left = f(index - 1, heights, dp) + abs(heights[index] - heights[index-1]);
    int right = INT_MAX;
    if(index > 1) {
       right = f(index - 2, heights, dp) + abs(heights[index] - heights[index-2]);
    }
    
    
    return  dp[index] = min(right, left);
}
int frogJump(int n, vector<int> &heights) {
    vector<int> dp(n+1, -1);
    return f(n-1, heights, dp);
}

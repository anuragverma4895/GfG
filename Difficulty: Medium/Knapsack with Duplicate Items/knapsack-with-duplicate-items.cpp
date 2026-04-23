class Solution {
  public:
  
    int recur(int idx, int W, vector<int>& val, vector<int>& wt,
              vector<vector<int>>& dp){
        
        if(W == 0) return 0;
        if(idx >= val.size()) return 0;
        
        if(dp[idx][W] != -1) return dp[idx][W];

        // take (stay on same index → unbounded)
        int take = 0;
        if(wt[idx] <= W){
            take = val[idx] + recur(idx, W - wt[idx], val, wt, dp);
        }

        // not take (move to next index)
        int not_take = recur(idx + 1, W, val, wt, dp);
        
        return dp[idx][W] = max(take, not_take);
    }

    int knapSack(vector<int>& val, vector<int>& wt, int capacity) {
        
        int n = val.size();
        vector<vector<int>> dp(n, vector<int>(capacity + 1, -1));
        
        return recur(0, capacity, val, wt, dp);
    }
};
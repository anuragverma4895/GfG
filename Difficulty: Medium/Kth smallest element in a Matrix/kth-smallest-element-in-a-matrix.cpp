class Solution {
  public:
    int kthSmallest(vector<vector<int>> &mat, int k) {
        
        int n=mat.size();
        // if(n*n<k) return 0;
        vector<long long>arr;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                arr.push_back(mat[i][j]);
            }
        }
        sort(arr.begin(),arr.end());
        int number=arr[k-1];
        return number;
    }
};

class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        int n=arr.size();
        vector<int>ans(2,-1);
        long long sum=0;
        long long j=0;
        for(long long i=0;i<n;i++){
            sum+=arr[i];
            if(sum==target){
                ans[0]=j+1;
                ans[1]=i+1;
                return ans;
            }
            while(sum>target && j<=i){
                sum-=arr[j++];
                if(sum==target){
                    ans[0]=j+1;
                    ans[1]=i+1;
                    return ans;;
                }
            }
        }
        return {-1};
    }
};
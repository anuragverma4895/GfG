class Solution {
  public:
    bool subArrayExists(vector<int>& arr) {
        int n=arr.size();
        unordered_set<int>s;
        int sum=0;
        s.insert(0);
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(s.count(sum)) return true;
            s.insert(sum);
        }
        return false;
    }
};
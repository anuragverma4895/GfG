class Solution {
  public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        set<int>s;
        set_union(a.begin(),a.end(),b.begin(),b.end(),inserter(s,s.begin()));
        int n=s.size();
        vector<int>v;
        for(auto x:s){
            v.push_back(x);
        }
        return v;
    }
};
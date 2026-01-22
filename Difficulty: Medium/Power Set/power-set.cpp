class Solution {
  public:
  
    void solve(string s, int index, vector<string>&ans, string temp){
        if(index==s.size()){
            ans.push_back(temp);
            return;
        }
        temp.push_back(s[index]);
        solve(s,index+1,ans,temp);
        temp.pop_back();
        solve(s,index+1,ans,temp);
    }  
    vector<string> AllPossibleStrings(string s) {
        vector<string>ans;
        string temp="";
        solve(s,0,ans,temp);
        sort(ans.begin(),ans.end());
        return ans;
    }
};
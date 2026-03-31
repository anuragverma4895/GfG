class Solution {
  public:
    string findOrder(vector<string> &words) {
        unordered_map<char, vector<char>> adj;
        unordered_map<char, int> indegree;
        
        for(auto &w : words) {
            for(char c : w) indegree[c] = 0;
        }
        
        for(int i = 0; i < words.size() - 1; i++) {
            string a = words[i], b = words[i+1];
            int len = min(a.size(), b.size());
            bool found = false;
            
            for(int j = 0; j < len; j++) {
                if(a[j] != b[j]) {
                    adj[a[j]].push_back(b[j]);
                    indegree[b[j]]++;
                    found = true;
                    break;
                }
            }
            
            if(!found && a.size() > b.size()) return "";
        }
        
        queue<char> q;
        for(auto &it : indegree) {
            if(it.second == 0) q.push(it.first);
        }
        
        string ans = "";
        
        while(!q.empty()) {
            char u = q.front(); q.pop();
            ans += u;
            
            for(char v : adj[u]) {
                indegree[v]--;
                if(indegree[v] == 0) q.push(v);
            }
        }
        
        if(ans.size() != indegree.size()) return "";
        
        return ans;
    }
};
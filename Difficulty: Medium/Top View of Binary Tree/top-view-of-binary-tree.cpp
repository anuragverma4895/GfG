/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    vector<int> topView(Node *root) {
        vector<int>ans;
        if(root==NULL) return ans;
        queue<pair<Node*,int>>q;
        map<int,int>mp;
        q.push({root,0});
        while(q.size()){
            auto it=q.front();
            q.pop();
            Node* curr=it.first;
            int x_corr=it.second;
            if(mp.find(x_corr)==mp.end()){
                mp[x_corr]=curr->data;
            }
            if(curr->left!=NULL){
                q.push({curr->left,x_corr-1});
            }
            if(curr->right!=NULL){
                q.push({curr->right,x_corr+1});
            }
                
        }
        for(auto it:mp){
            ans.push_back(it.second);
        }
        return ans;
    }
};
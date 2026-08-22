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
    vector<int> topView(Node *root){
        vector<int>ans;
        if(root==NULL) return ans;
        map<int,map<int,vector<int>>>nodes;
        queue<pair<Node*,pair<int,int>>>q;
        q.push({root,{0,0}});
        while(q.size()){
            int sz=q.size();
            for(int i=0;i<sz;i++){
                auto p=q.front();
                q.pop();
                Node* curr=p.first;
                int x=p.second.first;
                int y=p.second.second;
                nodes[x][y].push_back(curr->data);
                if(curr->left) q.push({curr->left,{x-1,y+1}});
                if(curr->right) q.push({curr->right,{x+1,y+1}});
            }
        }
        for(auto x:nodes){
            auto y=x.second.begin();
            ans.push_back(*y->second.begin());
        }
        return ans;
    }
};






// class Solution {
//   public:
//     vector<int> topView(Node *root) {
//         vector<int>ans;
//         if(root==NULL) return ans;
//         queue<pair<Node*,int>>q;
//         map<int,int>mp;
//         q.push({root,0});
//         while(q.size()){
//             auto it=q.front();
//             q.pop();
//             Node* curr=it.first;
//             int x_corr=it.second;
//             if(mp.find(x_corr)==mp.end()){
//                 mp[x_corr]=curr->data;
//             }
//             if(curr->left!=NULL){
//                 q.push({curr->left,x_corr-1});
//             }
//             if(curr->right!=NULL){
//                 q.push({curr->right,x_corr+1});
//             }
                
//         }
//         for(auto it:mp){
//             ans.push_back(it.second);
//         }
//         return ans;
//     }
// };
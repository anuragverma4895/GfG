/*
Definition for Node
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/


// tc=O(nlogn), sc=O(n)
// class Solution {
//   public:
//     vector<int> bottomView(Node *root) {
//         vector<int>ans;
//         if(root==NULL) return ans;
//         map<int,map<int,vector<int>>>nodes;
//         queue<pair<Node*,pair<int,int>>>q;
//         q.push({root,{0,0}});
//         while(q.size()){
//             int sz=q.size();
//             for(int i=0;i<sz;i++){
//                 auto p=q.front();
//                 q.pop();
//                 Node* curr=p.first;
//                 int x=p.second.first;
//                 int y=p.second.second;
//                 nodes[x][y].push_back(curr->data);
//                 if(curr->left) q.push({curr->left,{x-1,y+1}});
//                 if(curr->right) q.push({curr->right,{x+1,y+1}});
//             }
            
//         }
//         // vector<vector<int>>tempans;
//         // for(auto x:nodes){
//         //     vector<int>temp;
//         //     for(auto y:x.second){
//         //         for( auto z:y.second){
//         //             temp.push_back(z);
//         //         } 
//         //     }
//         //     tempans.push_back(temp);
//         // }
//         // for(int i=0;i<tempans.size();i++){
//         //     int n=tempans[i].size();
//         //     ans.push_back(tempans[i][n-1]);
//         // }
        
//         // or
//         for(auto x:nodes){
//             auto y=x.second.rbegin();
//             ans.push_back(y->second.back());
//         }
//         return ans;
//     }
// };



class Solution {
  public:
    vector<int> bottomView(Node *root){
        vector<int>ans;
        if(root==NULL) return ans;
        queue<pair<Node*,int>>q;
        q.push({root,0});
        map<int,int>mp;
        while(q.size()){
            auto p=q.front();
            q.pop();
            Node* curr=p.first;
            int x=p.second;
            mp[x]=curr->data;
            if(curr->left) q.push({curr->left,x-1});
            if(curr->right) q.push({curr->right,x+1});
        }
        for(auto it:mp){
            ans.push_back(it.second);
        }
        return ans;
    }
};













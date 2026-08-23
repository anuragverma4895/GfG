/* Node Structure
class Node {
  public:
    int data;
    Node* left, *right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
}; */

class Solution {
  public:
  
    void leftboundary(Node* root, vector<int>&ans){
        if(root==NULL) return;
        if(root->left==NULL and root->right==NULL) return;
        ans.push_back(root->data);
        if(root->left){
            leftboundary(root->left,ans);
        }else{
            leftboundary(root->right,ans);
        }
    }
    void rightboundary(Node* root, vector<int>&ans){
        if(root==NULL) return;
        if(root->left==NULL and root->right==NULL) return;
        if(root->right){
            rightboundary(root->right,ans);
        }else{
            rightboundary(root->left,ans);
        }
        ans.push_back(root->data);
    }
    void leaf(Node* root, vector<int>&ans){
        if(root==NULL) return;
        if(root->left==NULL and root->right==NULL){
            ans.push_back(root->data);
            return;
        }
        leaf(root->left,ans);
        leaf(root->right,ans);
    }
    vector<int> boundaryTraversal(Node *root) {
        vector<int>ans;
        if(root==NULL) return ans;
        ans.push_back(root->data);
        leftboundary(root->left,ans);
        leaf(root->left,ans);
        leaf(root->right,ans);
        rightboundary(root->right,ans);
        return ans;
    }
};
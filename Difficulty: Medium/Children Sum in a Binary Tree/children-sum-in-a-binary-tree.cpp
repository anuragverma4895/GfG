/* Structure of a Tree Node
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
    bool isSumProperty(Node *root) {
        if(root==NULL or (root->left==NULL and root->right==NULL)) return true;
        if(root->left and root->right){
            if((root->left->data + root->right->data)!=root->data){
                return false;
            }
        }
        if(root->left!=NULL and root->right==NULL){
            if(root->left->data!=root->data) return false;
        }
        if(root->right!=NULL and root->left==NULL){
            if(root->right->data!=root->data) return false;
        }
        if(!isSumProperty(root->left)) return false;
        if(!isSumProperty(root->right)) return false;
        return true;
    }
};
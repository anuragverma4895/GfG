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

class Solution {
  public:
    int inOrderSuccessor(Node *root, Node *k) {
        Node* ans=NULL;
        while(root){
            if(root->data>k->data){
                ans=root;
                root=root->left;
            }else{
                root=root->right;
            }
        }
        return ans ? ans->data:-1;
    }
};
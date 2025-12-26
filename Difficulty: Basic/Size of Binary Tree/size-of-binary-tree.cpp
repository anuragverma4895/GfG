/*

Definition for Binary Tree Node
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    int getSize(Node* node) {
        if(node==NULL) return 0;
        int ans=0;
        queue<Node*>q;
        q.push(node);
        while(q.size()){
            Node* curr=q.front();
            q.pop();
            ans++;
            if(curr->left!=NULL){
                q.push(curr->left);
            }
            if(curr->right!=NULL){
                q.push(curr->right);
            }
        }
        return ans;
    }
};
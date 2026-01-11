/*
struct LNode { //Linked List
    int data;
    struct LNode* next;
    LNode(int x){
        data = x;
        next = NULL; }
};
struct TNode {   //Tree
    int data;
    struct TNode* left;
    struct TNode* right;
    TNode(int x){
        data=x;
        left=right=NULL; }
}; */
class Solution {
  public:

    TNode *sortedListToBST(LNode *head) {
        if(!head) return NULL;
        if(head->next==NULL) return new TNode(head->data);
        
        LNode* slow=head;
        LNode* fast=head;
        LNode* prev=NULL;
        
        while(fast && fast->next){
            prev=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        prev->next=NULL;
        
        TNode* root=new TNode(slow->data);
        root->left=sortedListToBST(head);
        root->right=sortedListToBST(slow->next);
        return root;
    }
};
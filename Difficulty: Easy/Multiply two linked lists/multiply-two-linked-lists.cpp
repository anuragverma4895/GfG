/* Linked list node structure
struct Node
{
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};*/

/*The method multiplies
two  linked lists l1 and l2
and returns their product*/

/* Multiply contents of two linked lists */
class solution {
  public:
  
    long long multiplyTwoLists(Node *first, Node *second) {
        
        long long mod = 1000000007;

        long long num1 = 0;
        long long num2 = 0;

        Node* temp = first;

        while(temp){
            num1 = ((num1 * 10) % mod + temp->data) % mod;
            temp = temp->next;
        }

        temp = second;

        while(temp){
            num2 = ((num2 * 10) % mod + temp->data) % mod;
            temp = temp->next;
        }

        return (num1 * num2) % mod;
    }
};
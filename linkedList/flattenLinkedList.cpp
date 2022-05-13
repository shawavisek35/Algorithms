/* Node structure  used in the program

struct Node{
	int data;
	struct Node * next;
	struct Node * bottom;
	
	Node(int x){
	    data = x;
	    next = NULL;
	    bottom = NULL;
	}
	
};
*/

/*  Function which returns the  root of 
    the flattened linked list. */
    
    
Node *merge(Node *head1, Node *head2) {
    Node *temp = new Node(0);
    Node *res = temp;
    while(head1 && head2) {
        if(head1->data > head2->data) {
            temp->bottom = head2;
            head2 = head2->bottom;
        }
        else {
            temp->bottom = head1;
            head1 = head1->bottom;
        }
        temp = temp->bottom;
    }
    
    while(head1) {
        temp->bottom = head1;
        head1 = head1->bottom;
        temp = temp->bottom;
    }
    while(head2) {
        temp->bottom = head2;
        head2 = head2->bottom;
        temp = temp->bottom;
    }
    return res->bottom;
}    
Node *flatten(Node *root)
{
   if(!root->next) {
       return root;
   }
   Node *newNode = flatten(root->next);
   Node *ans = merge(root, newNode);
   return ans;
}

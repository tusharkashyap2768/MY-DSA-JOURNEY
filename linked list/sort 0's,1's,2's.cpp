class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
        int zerocount =0;
        int onecount =0;
        int twocount =0;
        Node * temp = head;
        while(temp ! = NULL)
        {
            if(temp->data ==0)
            {
                zerocount++;
            }
            else if(temp->data ==1)
            {
                onecount++;
            }
            else if(temp->data ==2)
            {
                twocount++;
            }
            temp=temp->next;
        }
        
        temp=head;
        
        while(temp != NULL)
        {
            if(zerocount != NULL)
            {
                temp->data=0;
                zerocount --;
            }
            
            else if(onecount != NULL)
            {
                temp->data=1;
                onecount --;
            }
            
            else if(twocount != NULL)
            {
                temp->data=2;
                twocount --;
            }
            
            temp= temp->next;
        }
        return head;
    }
    
};

class Solution{
    
    private :
    Node * getMid(Node * head)
    {
        Node * slow = head;
        Node * fast = head -> next;
        
        while( fast ! NULL && fast -> next != NULL)
        {
            fast = fast -> next ->next;
            slow = slow -> next;
        }
        return slow;
    }
    
    Node * reverse(Node * head)
    {
        Node * curr = head;
        Node * prev = NULL;
        Node * next = NULL;
        
        while(curr != NULL)
        {
            next = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        if(head -> next == NULL)
        {
            return true ;
        }
        // middle nikalna
        Node * middle = getMid(head);
        // reverse karna
        Node * temp = middle -> next;
        middle -> next = reverse(temp);
        //
        Node * head1 = head;
        Node * head2 = middle->next;
        
        while(head2 != NULL)
        {
            if(head1 -> data ! = head2 -> data)
            {
                return false;
            }
            head1 = head1-> next;
            head2 = head2 -> next;
        }
        
        temp = middle ->next;
        middle -> next = reverse(temp);
        return true ;
    }
};

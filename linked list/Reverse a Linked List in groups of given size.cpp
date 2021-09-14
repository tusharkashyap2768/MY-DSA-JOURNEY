
class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    { 
        node * nex;
        node *prev=NULL;
        int c=0;
        node*cur=head;
        while(cur !=NULL and c<k)
        {
            nex=cur->next;
            cur->next=prev;
            prev=cur;
            cur=nex;
            c++;
        }
        if(nex != NULL)
        head->next=reverse(nex,k);
        return prev;
    }
};

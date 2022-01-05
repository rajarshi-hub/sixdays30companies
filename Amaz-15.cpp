void linkdelete(struct Node  *head, int M, int N)
    {
        while(head)
        {
        int m = M-1;
        while(head && m)
        {
            m--;
            head = head->next;
        }
        Node* skip = head;
        int n = N+1;
        while(head && n)
        {
            n--;
            head = head->next;
        }
        if(skip)
        skip->next = head;
        }
    }

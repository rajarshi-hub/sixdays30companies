void connect(Node *p)
{
   queue<Node*> q;
    Node* temp;
    Node* pre;
    int k;
    q.push(p);
    while(!q.empty())
    {
        k=0;pre=NULL;
        q.push(NULL);
        temp=q.front();
        q.pop();
        while(temp!=NULL)
        {
            if(temp->left)
            q.push(temp->left);
            if(temp->right)
            q.push(temp->right);
            if(k!=0)
            pre->nextRight=temp;
            pre=temp;
            temp=q.front();
            q.pop();
            k++;
        }
        pre->nextRight=NULL;
    }
}

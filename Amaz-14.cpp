pair<int,bool> timer(Node* root,int t,int &ma,int &l)
    {
        if(!root)
        return {0,false};
        pair<int,int> ld = timer(root->left,t,ma,l);
        pair<int,int> rd = timer(root->right,t,ma,l);
        bool sig = ld.second || rd.second;
        if(root->data == t)
        {
            l = 0;
            ma = max(ld.first,rd.first);
             return {max(ld.first,rd.first)+1,true};
        }
        if(!sig)
        return {max(ld.first,rd.first)+1,sig};
        else
        {
            l++;
            if(ld.second)
            {
                ma = max(ma,l+rd.first);
            }
            else
            {
                ma = max(ma,l+ld.first);
            }
            return {max(ld.first,rd.first)+1,sig};
        }
        
    }
    int minTime(Node* root, int target) 
    {
        int ma = 0;
        int l = 0;
        timer(root,target,ma,l);
        return ma;
    }

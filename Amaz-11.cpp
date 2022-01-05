 Node* preorder(vector<int> &A,int &ind)
    {
        if(A[ind] == -1)
        {
            ind++;
            return NULL;
        }
        Node* root = new Node(A[ind]);
        ind++;
        root->left = preorder(A,ind);
        root->right = preorder(A,ind);
        return root;
    }
    void inorder(Node* root,vector<int> &ans)
    {
        if(!root)
        {
         ans.push_back(-1);
        return;
        }
        ans.push_back(root->data);
        inorder(root->left,ans);
        inorder(root->right,ans);
    }
    //Function to serialize a tree and return a list containing nodes of tree.
    vector<int> serialize(Node *root) 
    {
        vector<int> ans;
        inorder(root,ans);
        return ans;
    }
    
    //Function to deserialize a list and construct the tree.
    Node * deSerialize(vector<int> &A)
    {
        int ind = 0;
        return preorder(A,ind);
    }

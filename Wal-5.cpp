int change(Node* node)
    {
        if(!node)
        return 0;
        int n = node->data;
        node->data = change(node->left)+change(node->right);
        return n+node->data;
    }
    void toSumTree(Node *node)
    {
        change(node);
    }

int subtree(Node* root,int X,int &c)
{
   if(!root)
   {
       return 0;
   }
   int ls = subtree(root->left,X,c);
   int rs = subtree(root->right,X,c);
   int subsum = ls+rs+root->data;
   if(subsum == X)
   c++;
   return subsum;
}
int countSubtreesWithSumX(Node* root, int X)
{
	int c = 0;
	subtree(root,X,c);
	return c;
}

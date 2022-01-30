class Solution {
public:
    Node* constructquad(int n,int i1,int i2,int j1,int j2,vector<vector<int>>& grid)
    {
        if(n == 1)
        {
            Node* root = new Node(grid[i1][j1],true);
            return root;
        }
        int val = -1;
        bool f = true;
        for(int i=i1;i<i2;i++)
        {
            for(int j=j1;j<j2;j++)
            {
                if(grid[i][j] == val || val == -1)
                {
                    val = grid[i][j];
                }
                else
                {
                    f = false;
                    break;
                }
            }
        }
        if(f)
        {
            Node* root = new Node(val,true);
            return root;
        }
        else
        {
            Node* root = new Node(1,false);
            root->topLeft = constructquad(n/2,i1,(i1+i2)/2,j1,(j1+j2)/2,grid);
            root->topRight = constructquad(n/2,i1,(i1+i2)/2,(j1+j2)/2,j2,grid);
            root->bottomLeft = constructquad(n/2,(i1+i2)/2,i2,j1,(j1+j2)/2,grid);
            root->bottomRight = constructquad(n/2,(i1+i2)/2,i2,(j1+j2)/2,j2,grid);
            return root;
        }
    }
    Node* construct(vector<vector<int>>& grid) {
        int n = grid.size();
        return constructquad(n,0,n,0,n,grid);
    }
};

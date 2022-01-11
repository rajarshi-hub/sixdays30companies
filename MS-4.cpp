vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
         int i1,i2,j1,j2;
    i1 = j1 = 0;
    i2 = r-1;
    j2 = c-1;
    vector<int> arr;
    int ind = 0;
    while(i1 <= i2 && j1 <= j2)
    {
        for(int i=j1;i<=j2;i++)
        arr.push_back(matrix[i1][i]);
        for(int i=i1+1;i<=i2;i++)
        arr.push_back(matrix[i][j2]);
        for(int i=j2-1;i>=j1;i--)
        arr.push_back(matrix[i2][i]);
        for(int i=i2-1;i>i1;i--)
        arr.push_back(matrix[i][j1]);
        i1++;
        i2--;
        j1++;
        j2--;
    }
    arr.resize(r*c);
    return arr;

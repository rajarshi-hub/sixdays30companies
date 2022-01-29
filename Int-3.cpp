void check(string str,int ind,int nextno,int misno,int n,int &mis)
{
    if(ind == n)
    {
        if(misno == -1)
        return;
        mis = misno;
        return;
    }
    int no = 0;
    for(int i=ind;i<min(n,ind+6);i++)
    {
        if(no == 0 && str[i] == '0' && i != ind)
        return;
        no*=10;
        no+=str[i]-'0';
        if(no == nextno)
        {
            check(str,i+1,nextno+1,misno,n,mis);
            return;
        }
        if(ind == 0)
        {
            check(str,i+1,no+1,misno,n,mis);
        }
    }
    if(misno == -1 && ind != 0)
    check(str,ind,nextno+1,nextno,n,mis);
    
}
int missingNumber(const string& str)
{
    int misno = -1;
    int mis = -1;
    check(str,0,-1,misno,str.size(),mis);
    return mis;
}

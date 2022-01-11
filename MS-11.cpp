vector<string> generate(int N)
{
    vector<string> ans;
    for(int i=1;i<=N;i++)
    {
        string s = "";
        int no = i;
        while(no)
        {
            s=to_string(no%2)+s;
            no/=2;
        }
        ans.push_back(s);
    }
    return ans;
}

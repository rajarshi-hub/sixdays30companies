//Initial Template for C++
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
vector<vector<string> > Anagrams(vector<string>& string_list) ;

 // } Driver Code Ends
//User function Template for C++

vector<vector<string> > Anagrams(vector<string>& string_list) 
{
    vector<string> strings;
     vector<vector<string>> v;
    for(int i=0;i<string_list.size();i++)
    {
        string str=string_list[i];
        strings.push_back(str);
    }
    for(int i=0;i<string_list.size();i++)
    {
        sort(strings[i].begin(),strings[i].end());
    }
    unordered_map<string,vector<int>> m;
    for(int i=0;i<string_list.size();i++)
    {
     m[strings[i]].push_back(i);   
        
    }
    for(auto i=m.begin();i!=m.end();i++)
    {
        vector<string> n;
        for(auto it=i->second.begin();it!=i->second.end();it++)
        {
        n.push_back(string_list[*it]);
        }
        v.push_back(n);
    }
    return v;
    
}

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<string> string_list(n);
        for (int i = 0; i < n; ++i)
            cin>>string_list[i]; 
        vector<vector<string> > result = Anagrams(string_list);
        sort(result.begin(),result.end());
        for (int i = 0; i < result.size(); i++)
        {
            for(int j=0; j < result[i].size(); j++)
            {
                cout<<result[i][j]<<" ";
            }
            cout<<"\n";
        }
    }

    return 0;
}
  // } Driver Code Ends

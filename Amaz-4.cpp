string FirstNonRepeating(string A){
		    int n = A.size();
		    vector<int> mp(26,0);
		    vector<int> nonrep;
		    string ans = "";
		    for(int i=0;i<n;i++)
		    {
		        if(mp[A[i]-'a'] == 0)
		        {
		            nonrep.push_back(A[i]-'a');
		        }
		        else
		        if(mp[A[i]-'a'] == 1)
		        {
		            for(int j=0;j<nonrep.size();j++)
		            {
		                if(nonrep[j] == A[i]-'a')
		                {
		                    nonrep.erase(nonrep.begin()+j);
		                    break;
		                }
		            }
		        }
		        if(nonrep.size() == 0)
		        ans+='#';
		        else
		        ans+=nonrep[0]+'a';
		        mp[A[i]-'a']++;
		    }
		    return ans;
		}

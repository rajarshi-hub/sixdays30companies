#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s1 = "10.1.1.3";
    string s2 = "10.1.1.9";
    int n = s1.size();
    int m = s2.size();
    int i = -1;
    int j = -1;
    while(true)
    {
        int no1 = 0;
        int no2 = 0;
        i++;
        while(i < n && s1[i] != '.')
        {
            no1*=10;
            no1+=s1[i]-'0';
            i++;
        }
        j++;
        while(j < m && s2[j] != '.')
        {
            no2*=10;
            no2+= s2[j]-'0';
            j++;
        }
        if(no1 < no2)
        {
            cout<<"2"<<endl;
            break;
        }
        else
        if(no1 > no2)
        {
            cout<<"1"<<endl;
            break;
        }
        
    }

    return 0;
}

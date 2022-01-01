/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
// Solution Using Min heap O(N)
#include <bits/stdc++.h>

using namespace std;

int main()
{
   priority_queue<int,vector<int>,greater<int>> pq;
   vector<int> a;  //Array with 10M Entries
   for(int i=0;i<10;i++)
   pq.push(a[i]);
   for(int i=10;i<10M;i++)
   {
       if(pq.top() < a[i])
       {
           pq.pop();
           pq.push(a[i]);
       }
   }
   while(!pq.empty())
   {
       cout<<pq.top()<<" ";
       pq.pop();
   }

    return 0;
}

/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    int pos = m % n +k-1;
    cout<<pos<<" ";

    return 0;
}

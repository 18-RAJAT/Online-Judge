#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> a(n),dup;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        cout<<a[0]<<" ";
        for(int i=1;i<n;i++)
        {
            if(a[i]!=a[i-1])
            {
                cout<<a[i]<<" ";
            }
            else
            {
                dup.push_back(a[i]);
            }
        }
        for(auto i:dup)
        {
            cout<<i<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
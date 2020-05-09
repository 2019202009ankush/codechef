#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        unordered_map<char,int> map;
        cin>>n>>m;
        for(int i=0;i<n;i++)
        {
            char temp;
            cin>>temp;
            map[temp]++;
        }
        while(m--)
        {
            int j;
            int i=0;
            cin>>j;
            for(auto it=map.begin();it!=map.end();it++)
            {
                if(it->second>j) i+=(it->second-j);
                
            }
            cout<<i<<endl;
        }
    }
}
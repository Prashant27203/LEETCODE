#include<bits/stdc++.h>
using namespace  std;
vector<int>query(vector<int>v)
{ 
    stack<int>st;vector<int>ans;
    for(int i =0;i<v.size();i++)
    {
        while (st.size() and st.top ()<= v[i])
        {
            st.pop();
        }
        if(st.empty()){ans.emplace_back(-1);}
        else{ans.emplace_back(st.top());}
        st.push(v[i]);
    }
    reverse(begin(ans),end(ans));
    return ans;
}
void print(vector<int>arr)
{
    for(int i=0;i<arr.size();i++)
    {
        cout<<"|"<<arr[i]<<"|";
    }
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int t = 0;
    cin>>t;
    while(t--)
    {
        int m;
        cin >> m;
        vector<int> nums(m);
        for (int i = 0; i < m; i++)
        {
            cin >> nums[i];
        }

        int n =0;
        cin >> n;
        vector<int>v(n);
        for(int i =0;i<n;i++)
        {
            cin>>v[i];
        }
        
        vector<int>nger = query(v);


        map<int,int>mp;
       
        for(int i =0;i<n;i++)
        {
            mp[v[i]]=nger[i];
        }

        vector<int> ans;
        for(int i=0;i<m;i++)
        {
            ans.push_back(mp[nums[i]]);
        }



        print(ans);
        cout<<endl;
    }
}
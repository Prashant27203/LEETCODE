#include<bits/stdc++.h>
using namespace std;
vector<int> solve(vector<int>&nums)
{
    int n = nums.size();
    stack<int>st;vector<int>ans;
    for(int  i=n-1;i>=0;i--)
    {
        while(st.size() and st.top()<=nums[i])
        {
            st.pop();
        }
        if(st.empty())
        {
            ans.emplace_back(-1);
        }
        else{
            ans.emplace_back(st.top());
        }
        st.push(nums[i]);
    }
    reverse(begin(ans),end(ans));
    return ans;
    }
void print(vector<int>num)
{
    for(auto it:num)
    {
        cout<<"|"<<it<<"|";
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
    int n =0;
    cin>>n;vector<int>v(n);
    for(int  i=0;i<n;i++)
    {
        cin>>v[i];
    }
vector<int>ans = solve(v);
print(ans);
cout<<endl;
}
return 0;
}
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> ans; // answer vector
void solve(vector<int>&nums,vector<vector<int>>&ans,int ind,vector<int>aux)
{
if(ind ==nums.size())
{
    ans.push_back(aux);
}
for(int i=ind;i<nums.size();i++)
{
    aux.push_back(nums[i]);
    solve(nums,ans,i+1,aux);
    aux.pop_back();
}
}
int main()
{
    int n =0;
    cin>>n;
    vector<int>v(n);
   
    vector<int>aux;//auxillary vector
    int ind=0;//index
    for(int  i=0;i<n;i++)
    {
        cin>>v[i];
    }
    solve(v,ans,0,aux);
    for(auto it:ans)
    {
        for(auto it1:it)
        {
            cout<<it1<<"--";
        }
        cout<<endl;
    }
    return 0;
}
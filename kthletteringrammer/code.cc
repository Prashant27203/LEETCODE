#include<bits/stdc++.h>
using namespace std;
int solve(int n ,int k )
{
    if(n==1 and k==1)
    {
        return 0;
    }
    long long int length = pow(2,n-1);
    long long int mid = length / 2;
    if(k<=mid)
    {
        return solve(n-1,k-1);
    }
    else{
        return !solve(n-1,k-mid);
    }
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int t =0;
    cin>>t;
    while(t--)
    {
        int n =0;
        int k =0;
        cin>>n;
        cin>>k;
        cout<<solve(n,k);
        cout<<endl;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long int n=0 , k =0;long long int ans = 0;
    cin>>n>>k;
    if(k<n)
    {
        cout<<k<<endl;
    }
    else if(k>=n)
    {
    ans = k+((k)/(n-1));
    if (ans % n == 0){ans--;}
    cout << ans<<endl;
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
    while(t--){
    solve();}
    return 0;
}
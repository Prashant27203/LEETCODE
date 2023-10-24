#include<bits/stdc++.h>
using namespace std;
void solve(string &st ,int ind,string &aux )
{
    if(aux.size()== st.size())
    {
        cout<<aux<<"\n";
        return ;
    }
    for(int i=ind;i<st.size();i++)
    {
        aux+=st[i];
        solve(st,ind+1,aux);
        aux.pop_back();
    }
}
int main()
{
    string st = "ac";
    string aux = "";
    solve(st,0,aux);
    return 0;
}
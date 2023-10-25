#include<bits/stdc++.h>
using namespace std ;
class Solution
{
public:
    int kthGrammar(int n, int k)
    {
        vector<vector<int>> v(n);
        v.push_back({0});
        for (int i = 1; i < n; i++)
        {
            vector<int> temp = v[i - 1];
            int o = temp.size();
            for (int j = 0; j < o; i++)
            {
                temp.push_back(!temp[j]);
            }
            v.push_back(temp);
        }
        for (auto it : v)
        {
            for (auto it1 : it)
            {
                cout << it1 << "--";
            }
            cout << endl;
        }
        return 0;
    }
};
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
        Solution obj;
        int n ,k;
        cin>>n>>k;
        obj.kthGrammar(n,k);
    }
    return 0;
}
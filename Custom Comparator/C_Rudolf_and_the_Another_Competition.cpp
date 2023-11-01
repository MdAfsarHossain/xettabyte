/*
    MD. AFSAR HOSSAIN
*/

#include <bits/stdc++.h>
#define ll long long int
#define pub push_back
#define pob pop_back
#define vll vector<ll>
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);                \
    cout.tie(NULL);
#define pi pair<ll, ll>
#define vpi vector<pair<ll, ll>>
#define fl(i, n) for (int i = 0; i < n; i++)
#define YES cout << "YES\n";
#define NO cout << "NO\n";
#define yes cout << "Yes\n";
#define no cout << "No\n";
#define minus cout << -1 << "\n";
using namespace std;

void solve()
{
    int n, m, h;
    cin>>n>>m>>h;

    vector<vector<int> > a;
    for(int i=0; i<n; i++)
    {
        vector<int> t;
        for(int j=0; j<m; j++)
        {
            int in;
            cin>>in;

            t.push_back(in);
        }
        sort(t.begin(), t.end());
        a.push_back(t);
    }

    vector<pair<int, pair<int, long long> > > vp;
    for(int i=0; i<n; i++)
    {
        int points = 0, tot = 0;
        long long penalty = 0;
        vector<long long> p;
        for(int j=0; j<m; j++)
        {
            if((tot + a[i][j] > h))
                break;
            points++;

            tot += a[i][j];
            if(j==0)
                p.push_back(a[i][j]);
            else
                p.push_back(p.back() + a[i][j]);
        }

        for(auto now: p)
        {
            penalty += now;
        }
        vp.push_back({i, {points, penalty}});
    }

    sort(vp.begin(), vp.end(), [&](pair<int, pair<int, long long>>x, pair<int, pair<int, long long>> y){
        if (x.second.first == y.second.first && x.second.second == y.second.second)
            return x.first < y.first;
        else if (x.second.first == y.second.first)
            return x.second.second < y.second.second;
        return x.second.first > y.second.first;
    });

    int rank;
    for(int i = 0; i <n; i++)
    {
        if(vp[i].first == 0)
        {
            rank = i + 1;
            break;
        }
    }

    cout<<rank<<"\n";

}

int main()
{
    fast;
    int t;
    cin>>t;
    
    // t = 1;
    while(t--)
    {
        solve();
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    map<int, long long> prefix;
    for(int i=1; i<=n; i++)
    {
        int l, r;
        cin>>l>>r;
        prefix[l]++;
        prefix[r+1]--;
    }

    long long sum = 0, ans = 0;
    for(auto [idx, value] : prefix)
    {
        sum += value;
        ans = max(ans, sum);
    }

    cout<<ans<<"\n";

    return 0;
}

//https://cses.fi/problemset/task/1619

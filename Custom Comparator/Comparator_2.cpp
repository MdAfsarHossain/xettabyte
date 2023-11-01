#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<pair<int, int>> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i].first>>v[i].second;
    }

    sort(v.begin(), v.end(), [&](pair<int, int>x, pair<int, int>y)
    {
        if(x.first == y.first)
            return x.second > y.second;
        return x.first < y.first;
    });

    for(int i=0; i<n; i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<"\n";
    }

    return 0;
}

/*
7
5 2
1 4
3 6
1 3
1 7
4 5
3 8

Output:
1 7
1 4
1 3
3 8
3 6
4 5
5 2
*/


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

    sort(v.begin(), v.end());

//    for (auto [x, y] : v)
//    {
//        cout<<x<<" "<<y<<"\n";
//    }
//    cout<<"\n";

    for(int i=0; i<n; i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<"\n";
    }

    return 0;
}

/*
5
2 3
2 5
1 4
1 2
5 7

Output:
1 2
1 4
2 3
2 5
5 7
*/



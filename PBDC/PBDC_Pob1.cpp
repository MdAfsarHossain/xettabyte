#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
//                                                    less<T>, greater<T> / less_equal<T>
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        vector<int> a(n);
        for(int i=0; i<n; i++)
            cin>>a[i];

        pbds<int> p;
        long long ans = 0;
        for(int i=n-1; i>=0; i--)
        {
            if(i==(n-1))
                p.insert(a[i]);
            else
            {
                ans += p.order_of_key(a[i]);
                p.insert(a[i]);
            }
        }

        cout<<ans<<"\n";
    }

    return 0;
}

// https://www.spoj.com/problems/INVCNT/

/**
Input:
2

3
3
1
2

5
2
3
8
6
1


Output:
2
5
**/

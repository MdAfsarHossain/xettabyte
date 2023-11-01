#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
//                                                    less<T>, greater<T> / less_equal<T>
int main()
{
    pbds<int> s;

    s.insert(2);
    s.insert(4);
    s.insert(3);
    s.insert(2);
    s.insert(1);
    s.insert(5);
    s.insert(3);

    for(auto val: s)
        cout<<val<<" ";
    cout<<"\n";

    cout<<*s.find_by_order(2)<<"\n";
    cout<<s.order_of_key(5)<<"\n";

    return 0;
}

//https://www.spoj.com/problems/INVCNT/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s;
//    multiset<int> s;

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

    return 0;
}

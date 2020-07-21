#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(nullptr);


    unordered_set<int> myset, myset2;
    int n;
    cin>>n;
    int c = 0;
    for (int i = 0; i < n; ++i) {
        int x;
        cin>>x;
        if(myset.find(x)!=myset.end())
        {
            myset2.insert(x);

        }
        else
            myset.insert(x);
    }

    cout<<myset.size()-myset2.size();
    return 0;
}
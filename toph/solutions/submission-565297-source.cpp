#include <bits/stdc++.h>
using namespace std;
vector<int> box;


int main()
{
    int n, x, c = 0;
    cin>>n;
    for (int i = 0; i < n; ++i) {
        cin>>x;
        if(x%2==0)
            c++;
    }
    cout<<c;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
vector<int> box;


int main()
{

    priority_queue<int>q;
    int n;
    cin>>n;
    for (int i = 0; i < n; ++i) {
        int p; cin>>p;
        q.push(p);
    }
    cout<<q.top();
    return 0;
}
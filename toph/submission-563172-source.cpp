#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<string, int> p1, pair<string, int> p2)
{
    if(p1.second==p2.second)
        return p1.first<p2.first;
    return p1.second>p2.second;
}

int main()
{

    priority_queue<int> q;

    int x1, x2, y1, y2;

    cin>>x1>>y1>>x2>>y2;

    int n;
    cin>>n;
    for (int i = 0; i < n; ++i) {
        int a, b;
        cin>>a>>b;
        int mn = min( min(abs(a-x1),abs(a-x2)), min(abs(b-y1), abs(b-y2)) );
        q.push(mn);
    }

    cout<<setprecision(10)<<fixed<<q.top()*3.141593*q.top();

    return 0;

}


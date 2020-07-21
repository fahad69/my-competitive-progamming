#include <bits/stdc++.h>
using namespace std;
int main()
{

    priority_queue<int, vector<int>, greater<int>> q1;
    priority_queue<int> q2;


    int n;
    cin>>n;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            int k;
            cin>>k;
            q1.push(k);
            q2.push(k);
        }
    }

    if(n%2==0)
    {
        int sum1 = 0, sum2 = 0;
        for (int i = 0; i < n; ++i) {
            sum1 += q1.top();
            q1.pop();
        }
        for (int i = 0; i < n; ++i) {
            sum2 += q2.top();
            q2.pop();
        }
        cout<<abs(sum1-sum2);
    }
    else
    {
        int sum1 = 0, sum2 = 0;
        for (int i = 0; i < n-1; ++i) {
            sum1 += q1.top();
            q1.pop();
        }
        for (int i = 0; i < n-1; ++i) {
            sum2 += q2.top();
            q2.pop();
        }
        cout<<abs(sum1-sum2);
    }

    return 0;
}


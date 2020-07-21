#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n, m;
    cin>>n>>m;
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        int x;
        cin>>x;
        sum += x;
    }
    
    int res = sum/m;
    if(sum%m!=0)
        res++;
    
    cout<<res;

}
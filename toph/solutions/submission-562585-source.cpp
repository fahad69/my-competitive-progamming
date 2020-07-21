#include <bits/stdc++.h>

using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;

    for (int i = 0; i < t; ++i) {
        int size, n;
        cin>>size>>n;
        int area = size*size;
        int area2 = area/2;
        if(n==1)
            cout<<area<<endl;
        else if(n==2)
            cout<<3*area2<<endl;
        else
        {
            cout<<3*area2+(n-2)*area2<<endl;
        }

    }



    return 0;
}


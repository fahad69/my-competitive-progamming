#include <bits/stdc++.h>
using namespace std;
vector<int> box;

double func(int x)
{
    double ans = -(1/8.0)*x*x + (3.0/(8.0*x*x));
    return ans;
}

int main()
{

    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        int n;
        cin>>n;

        if(n==0)
            cout<<"Undefined\n";
        else
            cout<<setprecision(2)<<fixed<<func(n)<<endl;
    }


    return 0;
}
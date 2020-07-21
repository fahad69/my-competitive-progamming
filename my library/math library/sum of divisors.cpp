#include <bits/stdc++.h>

using namespace std;

vector<pair<long long, long long>> give_factors(long long n)
{
    vector<pair<long long, long long>> f;

    if(n==1)
    {
        f.push_back(make_pair(1,1));
    }
    for(int i = 2; i*i<=n; i++)
    {
        if(n%i==0)
        {
            f.push_back(make_pair(i,0));
            while(n%i==0)
            {
                f[f.size()-1].second++;
                n = n/i;
            }
        }

    }

    if(n>1)
        f.push_back(make_pair(n, 1));
    return f;
}

long long norm_power(long long a, long long n)
{
    if(n == 0) return 1;

    long long temp = norm_power(a, n/2);
    temp = (temp*temp);
    if(n%2 == 1)
        temp = (temp*a);
    return temp;
}


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;

    for (int i = 0; i < t; ++i) {
        long long n;
        cin>>n;

        if(n==1)
        {
            cout<<"No\n";
            continue;
        }

        auto pp = give_factors(n);

        long long prod = 1;
        for (int j = 0; j < pp.size(); ++j) {
            long long p = pp[j].first;
            long long a = pp[j].second;
            prod = prod*(norm_power(p, a+1)-1)/(p-1);
        }

        cout<<prod<<endl;


    }



    return 0;
}


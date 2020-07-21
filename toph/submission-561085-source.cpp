#include <bits/stdc++.h>

using namespace std;

vector<pair<unsigned long long, unsigned long long>> give_factors(unsigned long long n)
{
    vector<pair<unsigned long long, unsigned long long>> f;

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

unsigned long long mod_power(unsigned long long a, unsigned long long n)
{
    //long long m = 1000000000007;
    if(n == 0) return 1;

    unsigned long long temp = mod_power(a, n/2);
    temp = (temp*temp);
    if(n%2 == 1)
        temp = (temp*a);
    return temp;
}


int main()
{

    unsigned long long t;
    cin>>t;
    for (int i = 0; i < t ; ++i) {


        unsigned long long x, y;
        scanf("%lld %lld", &x, &y);
        auto pp = give_factors(x);
        unsigned long long px = 1;
        for (int j = 0; j < pp.size(); ++j) {
            //cout<<pp[j].first<<" "<<pp[j].second<<endl;
            unsigned long long t1 = mod_power(pp[j].first, pp[j].second - 1);
            unsigned long long t2 = t1 * (pp[j].first - 1);
            px = (px * t2);
        }

        unsigned long long product1 = (px * x) / 2;
        unsigned long long res = product1*y + (px * x)*y*(y-1)/2;
        //printf("%llu\n", (px * cc) / 2);
        cout<<res<<endl;
    }


    return 0;
}
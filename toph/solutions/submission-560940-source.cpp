#include <bits/stdc++.h>

using namespace std;

vector<pair<int, int>> give_factors(int n)
{
    vector<pair<int, int>> f;

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

long long mod_power(long long a, long long n)
{
    long long m = 1000000007;
    if(n == 0) return 1%m;

    long long temp = mod_power(a, n/2);
    temp = (temp*temp)%m;
    if(n%2 == 1)
        temp = (temp*a)%m;
    return temp;
}


int main()
{

    long long t;
    cin>>t;

    for (int i = 0; i < t; ++i) {

        int len;
        cin>>len;

        string s;
        cin>>s;
        long long c1 = 1, c2 = 1;
        for (int j = 0; j < s.length(); ++j) {
            if(s[j]=='0')
            {
                //c1++;
                c1 = (c1*2)%100003;
            }
            else if(s[j]=='1')
            {
                c2 = (c2*3)%100003;
                //c2++;
            }

        }

        cout<<(c1+c2)%100003<<endl;


    }



    return 0;
}
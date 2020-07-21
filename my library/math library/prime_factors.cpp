#include<bits/stdc++.h>

using namespace std;

vector<long long> give_factors(long long n)
{
    vector<long long> f;

    for(long long i = 2; i*i<=n; i++)
    {
        while(n%i==0)
        {
            f.push_back(i);
            n = n/i;
        }
    }

    if(n>1)
        f.push_back(n);
    return f;
}

/*vector<pair<long long, long long>> give_factors(long long n)
{
    vector<pair<long long, long long>> f;

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
}*/


/*long long return_count(vector<pair<long long, long long>> x)
{
    long long counts = 0;
    if(x.size()>0)
        counts = 1;
    
    for (int i = 0; i < x.size(); ++i) {
        counts = counts*(x[i].second+1);
    }

    return counts;
}*/

int main() {

    //cout<<"hello";
    vector<long long> factors[101];

    for(long long i = 2; i<=100; i++)
    {
        factors[i] = give_factors(i);
    }

    for(long long p = 2; p<=50; p++)
    {
        cout<<p<<" :: ";
        for(long long i = 0; i<factors[p].size(); i++)
        cout<<factors[p][i]<<" ";
        cout<<endl;
    }

}
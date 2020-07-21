#include<bits/stdc++.h>

using namespace std;

typedef pair<vector<long long>,vector<long long>> pvll;
typedef vector<long long> vll;

pvll give_all_factors(long long x)
{
    vll v1;
    vll v2;
    long long i;
    for (i = 1; i*i < x ; ++i) {
        if(x%i==0)
        {
            v1.push_back(i);
            v2.push_back(x/i);
        }
    }
    if(i*i==x)
        v1.push_back(i);

    pvll pp = make_pair(v1, v2);
    return pp;
}


int main() {
    //freopen("out.txt", "r", stdin);
    long long t;
    cin>>t;
    pvll pp = give_all_factors(t);
    vll v1 = pp.first;
    vll v2 = pp.second;
    for (int i = 0; i < v1.size(); ++i) {
        cout<<v1[i]<<" ";
    }

    for (int j = v2.size()-1; j >=0 ; j--) {
        cout<<v2[j]<<" ";

    }
}
